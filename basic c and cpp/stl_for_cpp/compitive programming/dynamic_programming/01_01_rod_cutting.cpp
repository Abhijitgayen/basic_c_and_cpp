 #include<bits/stdc++.h>
 using namespace std;
 int cut_rod( int * pri, int * dp,int n){
    if(n==0){
        dp[0]=0;
        return 0;
    }
    else if(dp[n]!= -1){
        return dp[n];
    }
    int q=-10;
    for(int i=1;i<=n;i++){
        q=max(q,(pri[i]+cut_rod(pri,dp,n-i)));
    }
    dp[n]=q;
    return q;
}
int main(){
    int n;
    cin>>n;
    int pri[n];
    for( int i=1;i<=n;i++){
        cin>>pri[i];
    }
    int size_of_rod;
    cin>>size_of_rod;
    int dp[n+1]={-1};
    cout<<cut_rod(pri,dp,size_of_rod)<<endl;
    return 0;
}