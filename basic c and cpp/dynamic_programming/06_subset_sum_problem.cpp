// Given an array of numbers of size n an d give an sum . we need to find a subset such that sum of this subset is equal to sum
#include<bits/stdc++.h>
using namespace std;
 int main(){
      int n;
       cin>>n;
       vector<int>arr(n,0);
      for( int i=0;i<n;i++){
           cin>>arr[i];
      }
       int sum;
       cin>>sum;
     //   cout<<"hello"<<endl;
       vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
       for( int i=0;i<=n;i++)dp[i][0]=1;//sum=0
       for( int i=1;i<=sum;i++)dp[0][i]=0;// no of item is zero thev sum is not zero;
       for( int i=1;i<n+1;i++){
            for( int j=1;j<sum+1;j++){
                 if(arr[i-1]<= j){
                      dp[i][j]=max(dp[i-1][j-arr[i-1]] ,dp[i-1][j]);
                 }
                 else{
                      dp[i][j]=dp[i-1][j];
                 }
            }
       }
       /*for( int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                    cout<< dp[i][j]<< " ";
                }   cout<<endl;    
          }*/
       cout<<dp[n][sum]<<endl;
 }