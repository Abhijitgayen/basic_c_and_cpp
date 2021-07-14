#include<bits/stdc++.h>
using namespace std;
/*breath frist search in graph*/
/*this is same as level terversal in binary tree*/
/*here we reperesent by adjacency list*/
/*adjacency list is must  improtent to low space complexity*/
void bfs( vector< int> *adjl, vector<bool> &visit){
    queue<int> qu;
    qu.push(1);
    visit[1]= true;
    while(!qu.empty()){
        int node=qu.front();
        qu.pop();
        cout<<node<< " ";
       
        vector<int> :: iterator it;
        for( it=adjl[node].begin(); it!= adjl[node].end(); it++){
            if(visit[*it]!=true){
                 qu.push(*it);
                  visit[*it]=true;

            }
        }
    }
}
 int main(){
    /*              1
                  /     \
                2   -   3
             /|\        | \
          4  5  6      7-8
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
      bfs(adjl,visit);

     return 0;
 }