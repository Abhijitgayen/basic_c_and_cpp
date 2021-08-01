#include<bits/stdc++.h>
using namespace std;
void sum(string st1, string st2){
     vector<int> ans;
     string s1,s2;
     if(st1.size() >= st2.size()){
          s1=st1;
          s2=st2;
     }
     else
     {
          s1=st2;
          s2=st1;
     }
    // cout<<s2<<endl;
     //size of the string s1 is bigger than s2
     //cout<<s1<<endl;
     int n1=s1.size()-1;
     int n2=s2.size()-1;
     int carry=0;
     while(n2!=-1 && n1!=-1){
          int sum=( (int)s1[n1]-'0')+( (int)s2[n2]-'0')+carry;
          //cout<<sum<<endl;
          ans.push_back(sum%10);
          carry=sum/10;
          n2--;
          n1--;
     }
     //cout<<n1<<n2<<endl;
     while(n1!=-1){
           int val=( ( int )s1[n1]-'0')+carry;
           //cout<<val;
          ans.push_back(val%10);
          carry=val/10;
          n1--;
     }
     while(carry){
          //cout<<carry<<endl;
          ans.push_back(carry);
           carry=carry/10;
     }
     for( int i=ans.size()-1;i>=0;i--){
         cout<<ans[i];
     }

}
int main(){
     string st1;
     string st2;
     cin>>st1>>st2;
     sum(st1,st2);
     return 0;
}
