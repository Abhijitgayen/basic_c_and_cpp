#include<bits/stdc++.h>
using namespace std;
int main(){
     array<int,5>arr={1,2,3,4,6};//other wise it is fill up by 0
     for(auto it=arr.begin();it!=arr.end();it++){
          cout<<*it<<" ";
     }cout<<endl;
     cout<<arr.empty()<<endl;
     cout<<arr.at(2)<<endl;
     //you are no able to increse the size of the array if anyone want increase the size
     arr.fill(1);
     for(auto it=arr.begin();it!=arr.end();it++){
          cout<<*it<<" ";
     }cout<<endl;
     arr[4]=10;
     cout<<arr.back()<<endl;
     cout<<arr.data()<<endl;
     //arr.data() return the pointer of the 1st element of the array
     //
     array<int,5>arr2={4,8,9,5,6};
     arr.swap(arr2);//it is mainly use to swap array
      for(auto it=arr.begin();it!=arr.end();it++){
          cout<<*it<<" ";
     }cout<<endl;
      for(auto it=arr2.begin();it!=arr2.end();it++){
          cout<<*it<<" ";
     }cout<<endl;

     return 0;
}