#include<bits/stdc++.h>
using namespace std;
//there is a knapsak such that it contain element of weight W
//given a list of object such that it has a perticular value and also perticlar weight
//you need find the maximum value of this weight W

int knapsak( vector<int> wt, vector<int> val,int w, int n){
     if(n==0 || w==0)return 0;
     if(wt[n-1]<=w){
          return max(val[n-1]+knapsak(wt,val,w-wt[n-1],n-1),knapsak(wt,val,w,n-1));
     }
     if(wt[n-1]>w) knapsak(wt,val,w,n-1);
     return 0;
}
 int dpknapsack(vector<vector<int>>&dp,vector<int>wt,vector<int>val, int n, int w){
      if(n==0||w==0){
           return 0;
      }
      if(wt[n-1]<=w){
           return dp[n][w]=max(val[n-1]+dpknapsack(dp,wt,val,n-1,w-wt[n-1]),dpknapsack(dp,wt,val,n-1,w));
      }
      if(wt[n-1]>w) return dp[n][w]=dpknapsack(dp,wt,val,n-1,w);
      return 0;
 }
int main(){
     int n;
     cin>>n;
     vector<int>wt(n);
     vector<int>val(n);
     for( int i=0;i<n;i++){
          cin>>val[i]>>wt[i];
     }
     int w;
     cin>>w;
     cout<<knapsak(wt,val,w,n)<<endl;
     vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
     cout<<dpknapsack(dp,wt,val,n,w)<<endl;
     

     /*top- down method */
     // t[i][j]-->reperesnt the the  no of item is i and the size of the knapsack is j 
     int t[n+1][w+1];
     for( int i=0;i<=n;i++)t[i][0]=0;
     for( int i=0;i<=w;i++)t[0][i]=0;
     for(int i=1;i<n+1;i++){
          for( int j=1;j<w+1;j++){
               if(wt[i-1]<=j){
                    t[i][j]=max(val[i-1]+t[i-1][w-wt[i-1]],t[i-1][w]);
               }
               else{
                    t[i][j]=t[i-1][w];
               }
          }
     }

     cout<<t[n][w]<<endl;
     return 0;
}
