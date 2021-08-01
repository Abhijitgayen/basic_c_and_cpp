#include<bits/stdc++.h>
using namespace std;
/*
multiset is a data structre in STL. This is implemented by B.S.T.
serach,delete, insertion, take O(n log n)
not contineous data strcture
-> multiset contain  more than one elements. repitation allow
-> every elements in this multiset is sorted
*/
int main(){
    //multiset< int ,greater< int> >
    multiset< int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(10);
    s.insert(12);
    s.insert(16);
    multiset< int> :: iterator it;
    for( it=s.begin(); it != s.end(); it++){
        cout<<*it<<"  ";
    }cout<<endl;
    s.erase(2);/*for delete one element we need to use pointer to erase element*/
    s.erase(++s.begin());
    s.erase(s.find(12));
     for( it=s.begin(); it != s.end(); it++){
        cout<<*it<<"  ";
    }cout<<endl;
    //s.rbegin() return the address of begin ofthe reverse of the set s 
    //s.rend() return the adress of end of  the reverse of the set s
    for(auto it=s.rbegin();it!=s.rend(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}