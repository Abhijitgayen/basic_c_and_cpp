#include<bits/stdc++.h>
using namespace std;
//need to work here
 int main(){
      vector<int> v1={1,2,3,4,5};
      vector<int> v2={8,9,4,12,13};
      vector<int>v3(v1.size()+v2.size()+1);
      merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin(),v3.end());
      for(auto it = v3.begin();it!=v3.end();it++){
           cout<<*it<<" ";
      }cout<<endl;
      return 0;
 }
