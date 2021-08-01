#include<bits/stdc++.h>
using namespace std;
//here give to you nxm grid you need to find the no of way to move form grid (1,1) to (n,m)
//one can move either left or down


//we able to try this by brute force
//that is by recursion
//time complexity O(2^(m+n))
//sapce complexity is O(m+n) 
//here height of the recursion tree is  ~ m+n

//we try to solve by memorize method in dynamic programming
//time complexity O(m+n);
//sapace complexity is O(m+n);

long long grid_tarverler( int n , int m,vector< vector< int> > &dp){
    if(n==1 && m==1){
        return 1;
    }
    if(n==0 ||m==0){
        return 0;
    }
    if(dp[n][m] != 0){
        return dp[n][m];
    }
    dp[n][m]= grid_tarverler(n-1,m, dp)+grid_tarverler(n, m-1,dp);
    dp[m][n]=dp[n][m];
    return dp[n][m];
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int m,n;
         cin>>m>>n;
         vector< vector< int> > dp( n+1, vector< int> (m+1,0));
        cout<<grid_tarverler(n, m,dp)<<endl;
    }cout<<endl;
    return 0;
}