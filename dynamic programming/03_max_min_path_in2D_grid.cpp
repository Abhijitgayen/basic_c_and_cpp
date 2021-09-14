#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     vector<vector<int>>a(n+1,vector<int>(m+1,0));
     for( int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
               cin>>a[i][j];
          }
     }
     vector<vector<int>>dp(n+2,vector<int>(m+2,0));
     //we try to creart martix of n+1 X m+1 
     //dp[i][j] the max path to go ceil (i,j) to (n,m)
     //one can moves either left and down
     for( int i=1;i<=m+1;i++){
          dp[n+1][i]=INT_MAX;//INT_MIN for max path
     }
     for( int i=1; i<=n+1;i++){
          dp[i][m+1]=INT_MAX;//INT_MIN for max path
     }
     dp[n+1][m]=0;
     dp[n][m+1]=0;
     //we movies from ceil to (n,m) to (1,1)
     for( int i=n;i>=1;i--){
          for( int j=m;j>=1;j--){
               dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i][j+1]);
               // dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i][j+1]); for max path
               //cout<<min(dp[i+1][j],dp[i][j+1])<<" ";
          }
     }
     for(int i=1;i<=n;i++){
          for( int j=1;j<=m;j++){
               cout<<dp[i][j]<<" ";
          }cout<<endl;
     }
     // find path (1,1) to (n,m)
     int i=1,j=1;
      cout<<"("<<i<<","<<j<<")  ->"<<a[i][j]<< endl;
     while(i!=n&&j!=m){
          if(i<n && j<m ){
          if( dp[i+1][j] > dp[i][j+1]){
               j++;
               cout<<"("<<i<<","<<j<<")  ->"<<a[i][j]<< endl;
          }
          else{
               i++;
                cout<<"("<<i<<","<<j<<")  ->"<<a[i][j]<< endl;
          }
          }
          else{
               if(i==n){
                    j++;
                     cout<<"("<<i<<","<<j<<")  ->"<<a[i][j]<< endl;
               }
               if(j==m){
                    i++;
                     cout<<"("<<i<<","<<j<<")  ->"<<a[i][j]<< endl;
               }
          }
     }
     cout<<"("<<n<<","<<m<<")  ->"<<a[n][m]<< endl;

}