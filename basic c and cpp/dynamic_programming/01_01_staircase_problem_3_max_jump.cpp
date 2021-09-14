#include<bits/stdc++.h>
using namespace std;
int d[100001];
int mod=100007;
int main(){
     int t;
     cin>>t;
     d[1]=1;
     d[2]=2;
     d[3]=4;
     for( int i=4;i<100001;i++){
          d[i]=(d[i-1]+d[i-2]+d[i-3])%mod;
     }
     while(t--){
          int n;
          cin>>n;
          cout<<d[n]<<endl;
     }
     return 0;
}