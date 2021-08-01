#include<bits/stdc++.h>
using namespace std;
vector<int> store_num(string st){
     vector<int> arr(st.size(),0);
     for(int i=0; i<st.size();i++){
          arr[i]=(int)st[i]-'0';
     }
     return arr;
}
int main(){
     string st;
     cin>>st;
     vector<int> arr=store_num(st);
     for( int i=0; i<arr.size();i++){
          cout<<arr[i];
     }
     return 0;
}