#include<bits/stdc++.h>
using namespace std;
int LCSS( string x, string y,int n, int m){
     if(n==0 || m==0){
          return 0;
     }
     if(x[n] == y[m]){
          return LCSS(x,y,n-1,m-1)+1;
     }
     else{
          return max(LCSS(x,y,n-1,m),LCSS(x,y,n,m-1));
     }
}
int LCSSme( vector<vector<int>>&dp,string x, string y,int n, int m){
     if(n==0 || m==0){
          dp[n][m]=0;
          return 0;
     }
     if(dp[n][m]!=-1)return dp[n][m];
     if(x[n] == y[m]){
          return dp[n][m]= LCSSme(dp,x,y,n-1,m-1)+1;
     }
     else{
          return dp[n][m]=max(LCSSme(dp,x,y,n-1,m),LCSSme(dp,x,y,n,m-1));
     }
}

int main(){
      string s1;
      string s2;
     cin>>s1>>s2;
     //cout<<LCSS(s1,s2,s1.size(),s2.size())<<endl;
     vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
     cout<<LCSSme(dp,s1,s2,s1.size(),s2.size())<<endl;
     return 0;
}