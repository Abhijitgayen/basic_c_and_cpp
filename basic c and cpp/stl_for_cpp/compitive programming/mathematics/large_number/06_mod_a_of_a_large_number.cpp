#include<bits/stdc++.h>
using namespace std;
void find_mod( string st, int n){
     int ans=0;
     ans=(((int)st[st.size()-1]-'0')%n);
     //cout<<ans<<endl;
     for(int i=st.size()-2; i>=0; i--){
     //xymod(n)=(x%n)*10+y%n;
     ans=(((int)st[i]-'0')%n)*10+(ans%n);
     //cout<<ans<<endl;
     }
     ans=ans%n;
     cout<<ans;
}
 int main(){
      int n;
      cin>>n;
      string st;
      cin>>st;
      find_mod(st,n);
      return 0;
 }