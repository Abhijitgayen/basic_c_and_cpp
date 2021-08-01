#include<bits/stdc++.h>
using namespace std;
bool isdivisable(string st){
     long long sum=0;
     for( int i=0; i<st.size();i++){
          sum+=(int)st[i]-'0';
     }
     if(sum%3==0){
          return true;
     }
     return false;
}
 int main(){
      string s;
      cin>>s;
      if(isdivisable(s))cout<<"yes"<<endl;
      else cout<<"no"<<endl;
      return 0;
 }