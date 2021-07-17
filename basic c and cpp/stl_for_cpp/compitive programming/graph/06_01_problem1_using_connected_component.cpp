#include<bits/stdc++.h>
using namespace std;
/*there given 0,1,2,.....N-1 number of people . if we chose any two piont either there are relation or no relation. now you ned find the total possible of two peopel  such that there are no relation between two people.*/
void print_adjl( vector<vector<int> > adjl){
    for( int i=0; i < adjl.size(); i++){
        cout<<i<<"->";
        for( int j=0 ;j<adjl[i].size();j++){
            cout<<adjl[i][j]<<" ";
        }cout<<endl;
    }
}
int connected_component( int src, vector< vector< int> > &adjl,vector<bool> &visited){
    if(visited[src]==true){
        return 0;
    }
    visited[src]=true;
     int ans=1;
    for( int i=0 ;i< adjl[src].size(); i++){
        if(visited[adjl[src][i]]==false){
            // cout<<ans<<endl;
            ans += connected_component( adjl[src][i],adjl,visited);
        }
    }
    return ans;
}
int main(){
     int n,m;
     cin>>n>>m;
     int x, y;
     vector< vector< int> > adjl(n);
      for( int i=0; i<m; i++){
          cin>>x>>y;
          adjl[x].push_back(y);
          adjl[y].push_back(x);
      }
    print_adjl(adjl);
    // we need to find the connected componet
    cout<<endl;
    vector<int> componet;
    vector<bool> visited(n,false);
    for( int i=0 ;i<n;i++){
        if(visited[i]==false){
            componet.push_back(connected_component(i,adjl,visited));
        }
    }
    for( int i=0 ;i< componet.size(); i++){
        cout<<componet[i]<<" ";
    }cout<<endl;
    //number of such possible is
    int total=0;
    for( int i=0 ;i< componet.size(); i++){
         total += componet[i]*(n-componet[i]);
    }
    total= total/2;
    cout<<"total number of such possible is : "<<total<<endl;
    cout<<endl;

    return 0;
}