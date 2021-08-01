#include<bits/stdc++.h>
using namespace std;
void multiple(int x, vector<int> &ans){
     int carry=0;
     for( int i=0; i<ans.size(); i++){
          int prod=ans[i]*x+carry;
          ans[i]=prod%10;
          carry=prod/10;
     }
     while(carry){
          ans.push_back(carry);
          carry=carry/10;
     }
}
void factorial( int num){
     vector <int> ans;
     ans.push_back(1);
     //ans[0]=1;
     int re_size=1;
     for( int i=2;i<=num;i++){
          multiple(i,ans);
     }
     for(int i=ans.size()-1;i>=0;i--){
          cout<<ans[i];
     }
     cout<<endl;
}
int main(){
     int n;
     cin>>n;
     factorial(n);
     return 0;
}