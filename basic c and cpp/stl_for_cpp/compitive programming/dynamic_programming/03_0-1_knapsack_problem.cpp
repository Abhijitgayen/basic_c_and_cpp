#include<bits/stdc++.h>
using namespace std;
/*this is a tabulation method to solve this problem*/
int main(){
    int n;
    cin>>n;
    vector <int> val(n),wt(n);
    for( int i=0;i<n;i++){
        cin>>val[i];
    }
    for( int i=0;i<n;i++){
        cin>>wt[i];
    }
    int knap_wt;
    cin>>knap_wt;
    int dp[n+1][knap_wt+1];/*we need to initialized in write way*/
    for( int i=0; i<=n;i++){
        for( int j=0;j<=knap_wt;j++){
            dp[i][j]=0;
        }
    }
    // vector<vector<int> > dp(n+1,vector<int>(knap_wt+1,0));
    for( int i=1;i<=n;i++){
        for( int j=0;j<=knap_wt;j++){
            dp[i][j]=dp[i-1][j];
            if(j-wt[i-1]>=0){
                dp[i][j]=max(dp[i][j],(dp[i-1][j-wt[i-1]]+val[i-1]));
            }
        }
    }
    cout<<dp[n][knap_wt]<<endl;

    return 0;
}