#include<bits/stdc++.h>
using namespace std;
 int main(){
      unordered_map<int, int> mp;
      int n;
      cin>>n;
      while(n--){
           int avl;
           cin>>avl;
           mp[avl]++;
      }
      for( auto it=mp.begin();it!=mp.end();++it){
           cout<<(*it).first<<"\t"<<(*it).second<<endl;
      }
       int a;
       cin>>a;
      if(mp.find(a)!=mp.end()){
           cout<<"data is there in map"<<endl;
           cout<<mp.at(a)<<endl;//it return the value of mp[a]
      }
      else{
           cout<<"Not there"<<endl;
      }
      mp.erase(++mp.begin(),mp.end());
      for( auto it=mp.begin();it!=mp.end();++it){
           cout<<(*it).first<<"\t"<<(*it).second<<endl;
      }
     cout<< mp.empty()<<endl;
     mp.clear();
     for( auto it=mp.begin();it!=mp.end();++it){
           cout<<(*it).first<<"\t"<<(*it).second<<endl;
      }
      return 0;
 }