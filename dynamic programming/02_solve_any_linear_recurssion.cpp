#include<bits/stdc++.h>
#define mod 1000007
using namespace std;
//t(n+1)=a t(n)+b t(n-1)
void multi(vector< vector<int>> &A , vector<vector<int>>&B){
     vector<vector<int>>res(2,vector<int>(2,0));
     for( int i=0;i<2;i++){
          for( int j=0;j<2;j++){
               for( int k=0;k<2;k++){
                    int re=(A[i][k]*B[k][j])%mod;
                    res[i][j]=(res[i][j]+re)%mod;
               }
          }
     }
     for( int i=0;i<2;i++){
          for( int j=0;j<2;j++){
               A[i][j]=res[i][j];
          }
     }
}
void maxtrix_power(vector<vector<int>> &A , int n){
   vector< vector<int>> In(2,vector<int>(2,0));
   In[0][0]=In[1][1]=1;
   while(n){
        if(n%2){
             multi(In,A);//I=I*a
             n--;
        }
        else{
             multi(A,A);//a=a*a
             n=n/2;
        }
   }
   for( int i=0;i<2;i++){
        for( int j=0;j<2;j++){
             A[i][j]=In[i][j];
        }
   }
}

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          int a,b;
          cin>>n>>a>>b;
          vector<vector<int>>com(2,vector<int>(2,0));
          com[0][0]=0;
          com[0][1]=a;
          com[1][0]=1;
          com[1][1]=b;
          int t0,t1;
          cin>>t0>>t1;
          maxtrix_power(com,n);
          long long int res=(com[0][1]*t0 +com[1][1]*t1)%mod;
          cout<<res<<endl;
     }
     return 0;
}