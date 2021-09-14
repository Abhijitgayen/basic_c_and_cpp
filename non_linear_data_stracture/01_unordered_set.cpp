#include<bits/stdc++.h>
using namespace std;
 int main(){
      //this is implimanted by hash table
//time complexity of this data stracture is O(1) avarage(worth case it be also O(n))
//same as set here ordered are not there
//it is not insert dta according to inserting element in the set
      int n;
      cin>>n;
      unordered_set<int>st;
      while(n--){
           int val;
           cin>>val;
           st.insert(val);
      }
      for(auto it=st.begin();it!=st.end();it++){
           cout<<*it<<" ";
      }cout<<endl;
       int a;
       cin>>a;
      if(st.find(a)!=st.end()){
           cout<<"data is there in the set"<<endl;
      }
      else{
           cout<<"data is not there in the set"<<endl;
      }
      st.clear();//use to clear all data in the set
      cout<<st.empty()<<endl;//to cheak this set empty or not
      unordered_set<int> stp;
      int m;
      while(m--){
           int ab;
           cin>>ab;
           stp.insert(ab);
      }
     //  set_union(st.begin(),st.end(),stp.begin(),stp.end());
      for(auto it=st.begin();it!=st.end();it++){
           cout<<*it<<" ";
      }cout<<endl;
      return 0;
 }