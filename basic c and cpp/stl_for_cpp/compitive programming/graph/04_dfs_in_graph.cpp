#include<bits/stdc++.h>
using namespace std;
/*deapth frist search in graph*/
/*here we reperesent by adjacency list*/
/*we able to print two types of  dfs print
1. post order
2.pre order
*/
void dfs(int node, vector< int> *adjl, vector<bool> &visit){
    //preorder
    visit[node]=true;
     cout<<node<<" ";

    //inorder
    vector<int> :: iterator it;
    for(it=adjl[node].begin();it!=adjl[node].end();it++){
        if(visit[*it]!=true){
            dfs(*it,adjl,visit);
        }
    }

    //postorder
    //cout<<node<<" ";
 
}
 int main(){
    /*              1
                   /  \
                2  -  3
             /|\     | \
          4  5  6  7-8
    */
      int n, m;
      cin>>n>>m;
      vector<int> adjl[n+1];
      vector<bool> visit(n+1,false);
       int x,y;
      for( int i=0; i<m;i++){
          cin>>x>>y;
          adjl[x].push_back(y);
          adjl[y].push_back(x);
      }
      dfs(1,adjl,visit);

     return 0;
 }