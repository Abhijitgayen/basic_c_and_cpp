// given a nxm 2d grid where each ceil contain either 0 or 1 you need to find path from (1x1) to (nxm)
#include<bits/stdc++.h>
using namespace std;
 int main(){
      int n,m;
      cin>>n>>m;
      vector<vector<int>>a(n,vector<int>(m,0));
      for( int i=0;i<n;i++){
           for( int j=0;j<m;j++){
                cin>>a[i][j];
           }
      }
      vector<vector<int>> dp(n+1,vector<int>(m+1,0));
      dp[n-1][m-1]=1;
      for( int i=n-2;i>=0;i--){
           if(a[i][m-1]==1 || dp[i+1][m-1]==0){
                dp[i][m-1]=0;
           }
           else dp[i][m-1]=1;
      }
      for(int j=m-2;j>=0;j--){
           if(a[n-1][j]==1 || dp[n-1][j+1]==0){
                dp[n-1][j]=0;
           }
           else dp[n-1][j]=1;
      }
      for( int i=n-2;i>=0;i--){
           for( int j=m-2;j>=0;j--){
                if(a[i][j]==1)dp[i][j]=0;
                else dp[i][j]=dp[i+1][j]+dp[i][j+1];
           }
      }
      for( int i=0;i<n;i++){
           for( int j=0;j<m;j++){
                cout<<dp[i][j]<<" ";
           }cout<<endl;
      }
      cout<<dp[0][0]<<endl;
      return 0;
 }