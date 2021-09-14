#include<bits/stdc++.h>
using namespace std;
int main(){
     char arr[]={'a','b','c','d','e','f'};
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          int tot=1<<n;
          for( int mask=0;mask<tot;mask++){
               for( int i=0;i<n;i++){
                     int f=1<<i;
                    if((mask&f)!=0)cout<<arr[i];
               }cout<<endl;
          }cout<<endl;
     }
     return 0;
}