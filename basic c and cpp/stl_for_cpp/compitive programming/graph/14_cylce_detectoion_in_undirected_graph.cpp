//this i undirected graph
#include<bits/stdc++.h>
using namespace std;
bool is_cyle( vector<bool> & visited,vector<int>adj[],int s ,int p){
     visited[s]=true;
     for(auto it=adj[s].begin();it!=adj[s].end();++it){
          if(*it!=p){
               if(visited[*it]){
                    // cout<<"helo"<<endl;
                    return true;
               }
               if(!visited[*it] && is_cyle(visited,adj,*it,s)){
                    return true;
               }
          }
     }
     return false;
}
int main(){
     int n,m;
     cin>>n>>m;
     vector<int> adj[n];
     for( int i=0; i<m;i++){
          int u,v;
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     for( int i=0; i<n ;i++){
          cout<<i<<"->";
          for( auto it=adj[i].begin();it!=adj[i].end();it++){
               cout<<*it<<" ";
          }cout<<endl;
     }
     vector<bool> visited(n,false);
     bool cyle=false;
     for( int i=0;i<n;i++){
          // cout<<cyle<<endl;
          if(!visited[i] && is_cyle(visited,adj,i,-1)){
               cyle=true;
          }
     }
     if(cyle)cout<<"cylce is there"<<endl;
     else cout<<"not there"<<endl;

     return 0;
}