#include<bits/stdc++.h>
using namespace std;
//this is not cuurrect codeneed to update this code 
void printgraph( int n, vector<int> adj[]){
     for( int i=0; i<n;i++){
          cout<<i<<"->";
          for(auto it=adj[i].begin(); it!=adj[i].end();++it){
               cout<<*it<<" ";
          }cout<<endl;
     }
}
void dfs_stack( int s,vector<int> adj[],int n){
       vector<bool> visited(n,false);
     //   vector<bool> print(n,false);
       stack<int>st;
       st.push(s);
       visited[s]=true;
       while(!st.empty()){
            int top=st.top();
            st.pop();
            cout<<top<<endl;
            for(auto it=adj[top].begin();it!=adj[top].end();++it){
                 if(!visited[*it]){
                      st.push(*it);
                 }
            }
       }
}
void dfs_rec( int s, vector<int> adj[],vector<bool>&visited){
     visited[s]=true;
     cout<<s<<" ";
     for(auto it=adj[s].begin(); it!= adj[s].end(); it++){
          if(!visited[*it]){
               dfs_rec(*it,adj,visited);
          }
     }
}
 int main(){
       int n,m;
       cin>>n>>m;
       vector<int> adj[n];
       for( int i=0; i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
          //   adj[v].push_back(u);
       }
       printgraph(n,adj);
       int s=0;//sorce node
       dfs_stack(s,adj,n);
       cout<<endl;
       vector<bool> visited(n,false);
       dfs_rec(s,adj,visited);
      return 0;
 }