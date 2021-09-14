#include<bits/stdc++.h>
using namespace std;
 int main(){
       int t;
       cin>>t;
       while(t--){
            int ans=0;
            int n;
            cin>>n;
            vector<int>f(32,0);
            for(int i=0;i<n;i++){
                 string s;
                 cin>>s;
                 int a=0;
                 for( int i=0; i<s.size();i++){
                      if(s[i]=='a') a=(a|1<<0);
                      if(s[i]=='e') a=(a|1<<1);
                      if(s[i]=='i') a=(a|1<<2);
                      if(s[i]=='o') a=(a|1<<3);
                      if(s[i]=='u') a=(a|1<<4);
                 }
                 f[a]++;
            }
            for(int i=0;i<31;i++){
                 for( int j=i+1;j<32;j++){
                      if((i|j)==31)ans+=f[i]*f[j];
                 }
            }
            ans+= (f[31]*(f[31]-1))/2;
            cout<<ans<<endl;
       }
      return 0;
 }
