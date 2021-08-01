#include<bits/stdc++.h>
using namespace std;
bool divisiable(string st,int num){

     int k=log2(num);
     if(k>st.size()){

          int sum=0;
          for( int i=0; i<st.size();i++){
               sum=sum*10+((int)st[i]-'0');
          }
          if(sum%num)return false;
          else return true;
     }
     else{
          int sum=0;
          for(int i=st.size()-k;i<st.size();i++){
               sum=sum*10+((int)st[i]-'0');
          }
          if(sum%num){
               return false;
          }
          else return true;
     }
     return false;
}
 int main(){
      int num;
      string st;
      cin>>st;
      cin>>num;
      if(divisiable(st,num))cout<<"yes"<<endl;
      else cout<<"no"<<endl;
      return 0;
 }
