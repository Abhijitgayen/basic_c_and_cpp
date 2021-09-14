#include<bits/stdc++.h>
// there are stair you need to calculate the no of possible to go from 1 to n
//one can jump 1 step or 2 step
//this is same as fibonaci sequence we need to calculate no of possible path from 1 to n-1 and no of possible path form 1 to n-2.
int mod=1e9+7;
int d[1000001];
using namespace std;
int main(){
     int n;
     cin>>n;
     d[1]=1;
     d[2]=2;
     for( int i=3;i<1000001;i++){
          d[i]=(d[i-1]+d[i-2])%mod;
     }
     cout<<d[n]<<endl;
     return 0;
}