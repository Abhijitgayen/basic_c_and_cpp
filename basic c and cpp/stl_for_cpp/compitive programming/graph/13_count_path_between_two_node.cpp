#include<bits/stdc++.h>
using namespace std;
void count_path( int & total,int src,int des,vector<int> adj[],vector<bool> & visited){
     if(src==des){
          total++;
          return;
     }
     visited[src]=true;
     for(auto it=adj[src].begin(); it!=adj[src].end();++it){//here apply dfs
          if(visited[*it]==false){
               count_path(total,*it,des,adj,visited);
          }
     }
}
 int main(){
      int n,m;
      cin>>n>>m;
      vector<int> adj[n];
      for( int i=0 ;i<m;i++){
           int u,v;
           cin>>u>>v;
           adj[u].push_back(v);
      }
      for( int i=0;i<n;i++){
           cout<<i<<"->";
           for( auto it= adj[i].begin(); it!=adj[i].end();it++){
                cout<<*it<<" ";
           }cout<<endl;
      }
      int src,des;
      cin>>src>>des;
      vector<bool> visited(n,false);
      int total=0;
      count_path(total,src,des,adj,visited);
      cout<<total<<endl;
 }
