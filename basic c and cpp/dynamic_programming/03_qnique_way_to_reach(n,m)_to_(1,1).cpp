#include<bits/stdc++.h>
using namespace std;
//we can go right or down only
// since from (x,y) to  (x+1,y) and (x,y+1)
//unique path from (x,y) = unique path from(x+1,y)+unique path from (x,y+1)

// recursiion method
int ways(vector<vector<int>>&dp, int a, int b, int n,int m){
     if(a<1 ||a>n || b<1 || b>m){
          return 0;
     }
     if(a==n&&b==m){
          dp[a][b]=1;
          return 1;
     }
     if(dp[a][b]!=-1){
          return dp[a][b];
     }
     int set=ways(dp,a+1,b,n,m)+ways(dp,a,b+1,n,m);
     dp[a][b]=set;
     return dp[a][b];
}


 int main(){
      int n,m;
      cin>>n>>m;
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
      cout<<ways(dp,1,1,n,m)<<endl;
     /* for( int i=1;i<=n;i++){
           dp[i][m]=1;
      }
      for( int i=1;i<=m;i++){
           dp[n][i]=1;
      }
      for( int i=n-1;i>=1;i--){
           for( int j=m-1;j>=1;j--){
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
           }   
      }*/
      for( int i=1;i<=n;i++){
           for( int j=1;j<=m;j++){
                cout<<dp[i][j]<<"\t";
           }cout<<endl;
      }

      return 0;
 }







