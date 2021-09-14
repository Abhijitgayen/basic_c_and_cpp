//given an array of size n. now you need to find the possible  min difference of two subarray.
 #include<bits/stdc++.h>
 using namespace std;
  int min_diff(vector<int> arr, int range){
       int n=arr.size();
       vector<vector<int>> dp(n+1,vector<int>(range+1,0));
       for( int i=0;i<=n;i++) dp[i][0]=1;
       for( int i=1;i<range+1;i++)dp[0][i]=0;
       for( int i=1;i<n+1;i++){
            for( int j=1;j<range+1;j++){
                  if(arr[i-1]<=j){
                       dp[i][j]= max(dp[i-1][j],dp[i-1][j-arr[i-1]]);
                  }
                  else{
                       dp[i][j]=dp[i-1][j];
                  }
            }
       }
        /*for( int i=0;i<n+1;i++){
             for( int j=0;j<range+1;j++){
                  cout<<dp[i][j]<<" ";
             }cout<<endl;
        }*/
       int ans=INT_MAX;
       for( int i=0; i<(range/2+1);i++){
             int set=range -2*i;
            if(dp[n][i]==1 && set>=0&&set < ans) {
                 ans=range-2*i;
                 // cout<<ans<<endl;
                 }

       }
       return ans ;
  }
int main(){
     int n;
     cin>>n;
      vector<int> arr(n,0);
       int range=0;
     for( int i=0;i<n;i++){
          cin>>arr[i];
           range+=arr[i];
     }
     cout<<min_diff(arr,range)<<endl;
       return 0;
  }