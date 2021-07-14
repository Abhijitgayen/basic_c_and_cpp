#include<iostream>
#include<deque>
using namespace std;
/*deque  -> Double ended Queue*/
/*here we also add data form front and also back
. and we also able to pop data from fornt as well as back*/
int main(){
    deque< int>  de;
    de.push_back(1);
    de.push_front(2);
    de.push_back(3);
    de.push_front(4);
    cout<<" Size of deque is  : " <<de.size()<<endl;
    while(!de.empty()){
        cout<<de.front()<<" ";
        de.pop_front();
        cout<<de.back()<< " ";
        de.pop_back();
    }cout<<endl;
    de.push_back(10);
    de.push_front(20);
    de.push_back(30);
    de.push_front(40);
    cout<<"Size of deque is  : " <<de.size()<<endl;
     deque< int> ::iterator it;
     for(it=de.begin(); it!=de.end();it++){
         cout<<*it<< " ";
     }
    
    return 0;
}