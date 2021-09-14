#include<bits/stdc++.h>
using namespace std;
 int findWays( vector<vector<int>>&dp,vector<vector<int>>a,int i, int j, int n,int m){
      if(i<0||j<0||i>=n||j>=m||a[i][j]==1)return 0;
      if(i ==n-1 && j==m-1){
           dp[i][j]=1;
           return 1;
      }
      if(dp[i][j]!=-1)return dp[i][j];
      dp[i][j]=findWays(dp,a,i+1,j,n,m)+findWays(dp,a,i,j+1,n,m);
      return dp[i][j];
 }
 int main(){
       int m,n;
       cin>>n>>m;
       vector<vector<int>>a(n,vector<int>(m,0));
       for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                 cin>>a[i][j];
            }
       }
       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       cout<<findWays(dp,a,0,0,n,m)<<endl;
       for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                 cout<<dp[i][j]<<" ";
            }cout<<endl;
       }

      return 0;
 }