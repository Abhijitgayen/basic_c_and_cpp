#include<bits/stdc++.h>
using namespace std;
/*
set is a data structre in STL. This is implemented by B.S.T.
serach,delete, insertion, take O(n log n)
not contineous data strcture
-> set contain unique elements. no repitation allow
-> every elements in this set is sorted
*/
int main(){
    set< int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(10);
    s.insert(12);
    s.insert(16);
    set< int> :: iterator it;
    for( it=s.begin(); it != s.end(); it++){
        cout<<*it<<"  ";
    }cout<<endl;
    s.erase(3);
    s.erase(++s.begin());
     for( it=s.begin(); it != s.end(); it++){
        cout<<*it<<"  ";
    }cout<<endl;
    set< int, greater< int> > dest;
    dest.insert(102);
    dest.insert(103);
    dest.insert(104);
    dest.insert(102);
    dest.insert(102);
    dest.insert(105);
    dest.insert(1010);
    dest.insert(1012);
    dest.insert(1016);
    for(auto it=dest.begin(); it!=dest.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    cout<<*dest.upper_bound(104)<<endl;
    cout<<*dest.lower_bound(104)<<endl;
    return 0;
}