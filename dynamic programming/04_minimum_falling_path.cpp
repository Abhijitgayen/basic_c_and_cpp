//what is the problem ?
//Given an nx m matrix return the min sum of any falling  path through martix
//A falling start any ceil of first row
//(row,col)->(row+1,col-1),(row+1,col),(row+1,col+1)
#include<bits/stdc++.h>
using namespace std;
 int main(){
      int n,m;
      cin>>n>>m;
       vector< vector<int>> a(n+1,vector<int>(m+1,0));
       for( int i=1;i<=n;i++){
            for( int j=1;j<=m;j++){
                 cin>>a[i][j];
            }
       }
       vector<vector<int>> dp(n+1,vector<int>(m+1,0));
       //below of dp matrix will be same as a matrix
       for( int i=1;i<=m;i++){
            dp[n][i]=a[n][i];
       }
       for(int i=n-1;i>=1;i--){
            for( int j=m;j>=1;j--){
                   int mine=dp[i+1][j];
            if(j>=2){
                 mine=  min(mine,dp[i+1][j-1]);
            }
            if(j<=m-1){
                  mine=  min(mine,dp[i+1][j+1]);
            }
            dp[i][j]=mine+a[i][j];
            }
           
       }
     for( int i=1;i<=n;i++){
          for( int j=1;j<=m;j++){
               cout<<dp[i][j]<<" ";
          }cout<<endl;
     }
      int minsum=dp[1][1];
     for(int i=2;i<=m;i++){
          minsum=min(minsum,dp[1][i]);
     }
     cout<<"ANS :"<<minsum<<endl;
      return 0;
 }