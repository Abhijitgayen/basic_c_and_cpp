#include<bits/stdc++.h>
using namespace std;
bool check_big(string s1, string s2){
     if(s1.size()>s2.size()){
          return true;
     }
     if(s1.size()==s2.size()){
          if (s1[0]>s2[0]) return true;
          else return false;
     }
     return false;
}
void subtract(string s1, string s2){
     vector<int> ans;
     string st1,st2;
     if(check_big(s1,s2)){
          st1=s1;
          st2=s2;
     }
     else{
          st1=s2;
          st2=s1;
     }//st1 is the bigest number
     //cout<<st1<<" "<<st2<<endl;
     int carry=0;
     int n1=st1.size()-1;
     int n2=st2.size()-1;
     while(n1!=-1 && n2!=-1){
          int sum=0;
          int d1=(int)st1[n1]-'0';
          int d2=(int)st2[n2]-'0';
          sum=d1-d2+carry;
          if(sum<0){
               sum=sum+10;
               carry=-1;
          }
          else{
               carry=0;
          }
        //  cout<<sum<<" ";
          ans.push_back(sum);
          n1--;
          n2--;
     }
     while(n1!=-1){
          int sum=((int)st1[n1]-'0')+carry;
          //cout<<sum<<" "<<carry;
          if(sum<0){
               sum=sum+10;
               carry=-1;
          }
          else
          carry=0;
          ans.push_back(sum);
          n1--;
     }
     reverse(ans.begin(),ans.end());
     auto it=ans.begin();
     int a=0;
     while(it!=ans.end() && *it==0){
          //cout<<*it<<endl;
          a++;
          it++;
     }
     ans.erase(ans.begin(),it);
    // cout<<a<<endl;
     if(ans.size()==0){
          ans.push_back(0);
     }
     for(auto it=ans.begin();it!=ans.end();it++){
          cout<<*it;
     }cout<<endl;
}
int main(){
     string s1,s2;
     cin>>s1>>s2;
     subtract(s1,s2);
     return 0;
}