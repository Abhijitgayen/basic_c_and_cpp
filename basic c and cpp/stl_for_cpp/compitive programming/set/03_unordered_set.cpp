#include<bits/stdc++.h> 
using namespace std;
//time complexity of this data stracture is O(1) avarage(worth case it be also O(n))
//same as set here ordered are not there
//it is not insert dta according to inserting element in the set
 int main(){
     unordered_set< int> uns;
     uns.insert(2);
     uns.insert(5);
     uns.insert(15);
     uns.insert(1);
     uns.insert(-12);
     uns.insert(1);
     uns.insert(1);
     for( auto it=uns.begin(); it!= uns.end(); it++){
         cout<<*it<<" ";
     }cout<<endl;
     cout<<"size of the unordered set : "<<uns.size()<<endl;
     //s.rbegin( ) and s.rend() is not work here
     uns.erase(15);
     uns.erase(++uns.begin());
     for( auto it=uns.begin(); it!= uns.end(); it++){
         cout<<*it<<" ";
     }cout<<endl;
     return 0;
 }