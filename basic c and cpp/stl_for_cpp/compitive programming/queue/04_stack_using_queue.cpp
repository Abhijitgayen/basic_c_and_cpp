#include<bits/stdc++.h>
using namespace std;
class Stack{
    int n;
    queue <int> q1;
    queue <int> q2;
    public:
    Stack( ){
        n=0;
    }
    void push( int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp =q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        n--;
    }
    int top(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return q1.front();
    }
    int size(){
        return n;
    }
    bool empty(){
        if( q1.empty() || n==0){
            return true;
        }
        return false;
    }
};
int main(){
    int n;
    cin>>n;
    int val;
    Stack sk;
    for( int i=0; i<n; i++){
        cin>>val;
        sk.push(val);
    }
    cout<<"Size of the stack is : "<<sk.size()<<endl;
    while(!sk.empty()){
        cout<<sk.top()<<" ";
        sk.pop();
    }
    cout<<endl;
    cout<<"now size is : "<<sk.size()<<endl;
    return 0;
}