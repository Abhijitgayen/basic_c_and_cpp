#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack <int> s1;
    stack <int> s2;
    public:
     void push( int x){//complexity O(1)
         s1.push(x);
     }
     int pop(){//complexity O(n)
         if(s1.empty() && s2.empty()){
             cout<<"Queue is empty"<<endl;
             return -1;
         }
         if(s2.empty()){
             while(!s1.empty()){
                 s2.push(s1.top());
                 s1.pop();
             }
         }
         int topval=s2.top();
         s2.pop();
         return topval;
     }
     bool empty(){//complexity O(1)
         if(s1.empty() && s2.empty()){
             return true;
         }
         return false;
     }

};
int main(){
    int n;
    cin>>n;
    int val;
    Queue qu;
    for( int i=0; i<n;i++){
        cin>>val;
        qu.push(val);
    }
    while(!qu.empty()){
        cout<<qu.pop()<<" ";
    }
    cout<<endl;
    cout<<qu.pop()<<endl;
    cout<<qu.empty()<<endl;
    return 0;
}