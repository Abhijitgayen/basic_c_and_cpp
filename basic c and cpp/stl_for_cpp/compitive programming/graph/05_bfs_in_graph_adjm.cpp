#include<bits/stdc++.h>
using namespace std;
void bfs(int node, vector< vector<int> > adjm,vector<bool> & visit){
    queue<int> qu;
    qu.push(node);
    visit[node]=true;
    while(!qu.empty()){
        int temp=qu.front();
        cout<<temp<<" ";
        qu.pop();
        for( int i=1; i<adjm[temp].size();i++){
            if(adjm[temp][i]==1 && visit[i]==false){
                qu.push(i);
                visit[i]=true;
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
    int n,m;
    cin>>n>>m;
    vector<vector<int> > adjm( n+1, vector<int>(n+1,0));
    vector< bool> visit(n+1, false);
    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
   /* for( int i=1; i<n+1;i++){
        for( int j=1; j<n+1;j++){
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }*/
    bfs(1,adjm,visit);
    return 0;
}