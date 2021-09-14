#include<bits/stdc++.h>
using namespace std;
// given a string you need to find the longest size of  substring such that it will be a palindromic
//expected time complexity is O(n^2)
int sol(string s){
     int n=s.size();
     vector<vector<int>> dp(n+1,vector<int>(n+1,0));
     // here we try to creat a dp matrix 0 - n X 0 - n
     // where dp[i][j]=1-> from j-i+1 to j subsring with size i is a palindrom
     for( int i=0;i<=n;i++){
          dp[0][i]=dp[1][i]=1;
     }
     for( int i=2;i<n;i++){
          for(int j=i-1;j<n;j++){
               // cout<<s[j-i+1]<<"and"<<s[j]<<endl;
               if(s[j]==s[j-i+1] && dp[i-2][j-1]==1){//s[1] == s[0] for i=2
               
               dp[i][j]=1;
               }
               else{
                    dp[i][j]=0;
               }
          }
     }
     for( int i=n-1 ; i>=0;i--){
          for( int j=0;j<n;j++){
               if(dp[i][j]==1 && i>=2){
                    for( int k=j-i+1 ;k<=j;k++){
                         cout<<s[k];
                    }cout<<endl;
                    return i;
               }
          }
     }
return 0;
}
 int main(){
      int n;
      cin>>n;
      while(n--){
           string s;
           cin>>s;
           cout<<sol(s)<<endl;
      }
      return 0;
 }