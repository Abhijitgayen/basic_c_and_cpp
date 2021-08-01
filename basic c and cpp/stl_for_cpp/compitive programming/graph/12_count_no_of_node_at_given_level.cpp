// we need to appy BFS for this grapg to find this
#include <bits/stdc++.h>
using namespace std;
int no_node_at_level(int n, vector<int> adj[], int l){
     vector<bool> visited(n,false);
     vector<int> level(n);
     int s=0;
     level[s]=0;
     queue<int> q;
     q.push(s);
     visited[s]=true;
     while(!q.empty()){
          int top=q.front();
          q.pop();
          for(auto it=adj[top].begin();it!=adj[top].end();++it){
               if(visited[*it]==false){
                    q.push(*it);
                    visited[*it]=true;
                    level[*it]=level[top]+1;
               }
          }
     }
     int count=0;
     for(int i=0; i<n;i++){
          //cout<<endl;
          //cout<<level[i]<<"for"<<i<<endl;
          if(level[i]==l){
               count++;
               //cout<<i<<" ";
          }
     }cout<<endl;
 return count;
}
int main()
{
     int n, m;
     cin >> n >> m;
     vector<int> adj[n];
     for (int i = 0; i < m; i++)
     {
          int v, u;
          cin >> u >> v;
          adj[u].push_back(v);
     }
     for( int i=0;i<n;i++){
          cout<<i<<"->";
          for(auto it=adj[i].begin();it!=adj[i].end();it++){
               cout<<*it<<" ";
          }cout<<endl;
     }
     int level;
     cin>>level;
     cout<<no_node_at_level(n,adj,level)<<endl;
     return 0;
}