#include<bits/stdc++.h>
using namespace std;
int main(){

    /*              1
                  /     \
                2   -   3
             /|\        | \
          4  5  6      7-8
    */
    int n,m;
    cin>>n>>m;
    vector<int> adjl[n+1];
    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    for( int i=1; i<n+1;i++){
        cout<<i<<"->";
        vector<int> :: iterator it;
        for( it=adjl[i].begin(); it!=adjl[i].end();it++){
            cout<<*it<<" ";
        }cout<<endl;
    }
    return 0;
}