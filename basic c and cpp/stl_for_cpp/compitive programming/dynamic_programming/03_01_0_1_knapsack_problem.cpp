#include<bits/stdc++.h>
using namespace std;
/*i try to conver this problem to memporization problem but i am not able to fixed this */
int knapsack( vector<int> val, vector<int> wt, int w, int n,vector<vector<int>> &dp){
    if(n<=0){
        dp[n][w]=0;
        return 0;
    }
    if(w<=0){
        dp[n][w]=0;
        return 0;
    }
    if(dp[n][w] != -1){
        cout<<dp[n][w]<<endl;
        return dp[n][w];
    }
    if(w<wt[n]) return dp[n][w]=knapsack(val,wt,w,n-1,dp);
    dp[n-1][w]=knapsack(val,wt,w,n-1,dp);
    dp[n-1][w-wt[n]]=knapsack(val, wt,w-wt[n],n-1,dp);
    dp[n][w]=max(dp[n-1][w],dp[n-1][w-wt[n]]+val[n]); 
    return dp[n][w];
}
int main(){
    int n; cin>>n;
    vector<int> val(n),wt(n);
    for( int i=0;i<n;i++)cin>>val[i];
    for( int j=0;j<n;j++)cin>>wt[j];
    int w; cin>>w;
    vector<vector<int> >dp(n+1,vector<int>(w+1,-1));
    cout<<knapsack(val,wt,w,n,dp)<<endl;
    for( int i=0;i<=n;i++){
        for( int j=0;j<w+1;j++) cout<<dp[i][j]<< "   ";
        cout<<endl;
    }

    return 0;
}