//given an arrya of size n . and a sum s is given . you need to find the number of subset such that the sum of the subset is eqaul to s
//oredre is not matter here 
//{4,5} and {5,4} be diffrent here
# include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
       cin>>n;
       vector<int> arr(n,0);
       for( int i=0;i<n;i++){
            cin>>arr[i];
       }
        int sum;
         cin>>sum;
         vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
         for( int i=0;i<=n;i++)dp[i][0]=1;//sum=0 with no of item is zero
         for( int i=1;i<sum+1;i++)dp[0][i]=0;
         for( int i=1;i<=n;i++){
               for( int j=1;j<sum+1;j++){
                    if(arr[i-1]<=j){
                         dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                    }
                    else{
                         dp[i][j]=dp[i-1][j];
                    }
               }
         }
         /* for( int i=0;i<=n;i++){
               for( int j=0;j<sum+1;j++){
                    cout<<dp[i][j]<<" ";
               }cout<<endl;
          }*/
         cout<<dp[n][sum]<<endl;

     return 0;
}