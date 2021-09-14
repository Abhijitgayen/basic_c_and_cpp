#include<bits/stdc++.h>
using namespace std;
 int main(){
      string s1;
      string s2;
      cin>>s1>>s2;
       int n=s1.size();
       int m=s2.size();
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
      for( int i=0;i<=n;i++){
           dp[i][0]=0;
      }
      for(int j=0;j<=m;j++){
           dp[0][j]=0;
      }
      for(int i=1;i<=n;i++){
           for( int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                     dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
           }
      }
      vector<char> ans;
       int i=n , j =m;
      while(i!=0 || j!=0){
           if(s1[i-1]==s2[j-1]){
                ans.push_back(s1[i-1]);
                i--;
                j--;
           }
           else{
                if(dp[i][j-1] > dp[i-1][j]){
                     j--;
                }
                else{
                     i--;
                }
           }
      }
       for( int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
       }cout<<endl;
      return 0;
 }