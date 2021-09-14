//given an array of size n . there are any subset of such that the sum of element of those subset be equal or not return output is true or false
#include<bits/stdc++.h>
using namespace std;
//1st we sum the elemets of this array the sum%2==0 the this may possible oterwise return false. 2nd if sum %2==0 the we try to find a subset such that sum of those subset eqal to sum/2
 bool Equal_sum(vector<int> arr){
      int sum=0;
       int n=arr.size();
      for( int i=0;i<n;i++){
           sum+=arr[i];
      }
       if(sum%2) return false;
       else{
            vector<vector<int>>dp(n,vector<int>(sum+1,0));
            for( int i=0;i<n;i++) dp[i][0]=1;
            for(int i=1;i<sum+1;i++) dp[0][i]=0;
             for( int i=1;i<n;i++){
                  for( int j=1;j<sum+1;j++){
                        if(arr[i-1]<=j)
                       dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i-1]]);
                       else dp[i][j]=dp[i-1][j];
                  }
             }
              return dp[n-1][sum];
       }
 }
 int main(){
       int n;
       cin>>n;
        vector<int> arr(n+1);
       for ( int i=0;i<n;i++){
            cin>>arr[i];
       }
       cout<<Equal_sum(arr)<<endl;

      return 0;

 }