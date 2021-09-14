#include<bits/stdc++.h>
using namespace std;
int main(){
     string s1;
     string s2;
     cin>>s1>>s2;
      int n=s1.size();
       int m=s2.size();
     vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
     for( int i=0;i<n+1;i++){
          dp[i][0]=0;
     }
     for( int i=0;i<m+1;i++){
          dp[0][i]=0;
    }
     int maxv=0;
     for( int i=1;i<n+1;i++){
          for( int j=1;j<m+1;j++){
               if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                     if(maxv < dp[i][j])maxv=dp[i][j];
               }
               else{
                    dp[i][j]=0;
               }
          }
     }
     // for( int i=0;i<n+1;i++){
     //      for( int j=0;j<m+1;j++){
     //           cout<<dp[i][j]<<" ";
     //      }cout<<endl;
     // }
      cout<<maxv<<endl;
     return 0;
}