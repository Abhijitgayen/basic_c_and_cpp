#include<bits/stdc++.h>
using namespace std;
/*topology sort work for only dircted acyclic graph */
/*topology sort is not unique*/
/*cycle graph is not  a  have  topology sort*/
int main(){
    int n , m;
    cin>>n>>m;
    vector< vector< int>  > adjl(n);
    vector< int> indegree(n);
    vector<bool> visited(n,false);
    int x,y;
    for( int i=0 ;i< m ;i++){
        cin>>x>>y;
        //x-->y
        adjl[x].push_back(y);
        indegree[y]++;

    }
    
    queue< int > qu;
    for( int i=0 ; i< n ;i++){
        if(indegree[i]==0){
            qu.push(i);
        }
    }cout<<endl;
    while(!qu.empty()){
        int x= qu.front();
        qu.pop();
        cout<<x<<" ";
        for( int i=0 ; i<adjl[x].size();i++){
            indegree[adjl[x][i]]--;
            if(indegree[adjl[x][i] ]==0) {
                qu.push(adjl[x][i]);
                }
        }

    }

    return 0;
}