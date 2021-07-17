#include<bits/stdc++.h>
using namespace std;
 int no_of_comp(int src, vector<vector< int>> &adjl, vector< bool>&visited){
     int ans=1;
     visited[src]=true;
     for( int i=0 ;i< adjl[src].size(); i++){
         if(!visited[adjl[src][i]]){
             ans+=no_of_comp(adjl[src][i],adjl,visited);
         }
     }
    return ans;
 }
 int main(){
      int m,n;
      cin>>n>>m;
       int x, y;
       vector<vector<int> > adjl(n);
      for( int i=0; i<m; i++){
          cin>>x>>y;
          adjl[x].push_back(y);
        //   adjl[y].push_back(x);//this is use for undircted graph
      }
      cout<<endl;
      vector<bool> visited(n,false);
      vector<int> component;
      for( int i=0; i<n;i++){
        //   cout<<i<<"->"<< (visited[i]==false )<<endl;
          if(visited[i]==false ){
              component.push_back(no_of_comp(i,adjl,visited));
          }
      }
      for( int i=0 ;i< component.size() ; i++){
          cout<<component[i]<< " ";
      }cout<<endl;
     return 0;
 } 