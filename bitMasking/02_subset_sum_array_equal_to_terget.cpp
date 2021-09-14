#include<bits/stdc++.h>
using namespace std;
 int  main(){
      int t;
      cin>>t;
      while(t--){
           int n;
           cin>>n;
           vector<int>arr(n,0);
           for( int i=0;i<n;i++){
                cin>>arr[i];
           }
           int tar;
           cin>>tar;
           int tot=1<<n;
           bool flg=false;
           for( int mask=0;mask<tot;mask++){
                 int sum=0;
                for( int i=0;i<n;i++){
                     int f=1<<i;
                     if((mask&f)!=1){
                          sum+=arr[i];
                     }
                }
                if(sum==tar)flg=true;
           }
      if(flg)cout<<" yes"<<endl;
     else cout<<"no"<<endl;
      }
      return 0;
 }