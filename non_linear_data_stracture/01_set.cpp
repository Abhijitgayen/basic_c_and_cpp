#include<bits/stdc++.h>
using namespace std;
int main(){
     set<int> set_data;
     //set is contain unique element . no repetation is allow
     //and all elemnt will we print as sorted array
     //set is implemented by binary tree with 
     //serach,delete, insertion, take O(n log n)
     int n;
     cin>>n;
     while(n--){
          int val;
          cin>>val;
          set_data.insert(val);
     }
     for(auto it=set_data.begin();it!=set_data.end();++it){
          cout<<*it<<" ";
     }cout<<endl;
     int m;
     cin>>m;
     set<int,greater<int>>set_ma;//change this to max to min order
     while(m--){
          int v;
          cin>>v;
          set_ma.insert(v);
     }
     for(auto it=set_ma.begin();it!=set_ma.end();it++){
          cout<<*it<<" "; 
     }cout<<endl;
     cout<<set_ma.size()<<endl;
      int a;
      cin>>a;
     if(set_ma.find(a)!=set_ma.end()){
          cout<<"data is there in the set"<<endl;
     }
     else{
          cout<<"data is not there in set"<<endl;
     }
     cout<<set_ma.empty()<<endl;//use to cheak this set is empty
     set_ma.erase(++set_ma.begin(),set_ma.end());//use to erase data in the set
     for(auto it=set_ma.begin();it!=set_ma.end();it++){
          cout<<*it<<" "; 
     }cout<<endl;
     set_ma.clear();//use to clear all data in the set
     cout<<set_ma.empty()<<endl;
     for(auto it=set_ma.begin();it!=set_ma.end();it++){
          cout<<*it<<" "; 
          //cout<<"hello"<<endl;
     }cout<<endl;
     return 0;
}