/*In this code pop is costly*/
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
         q1.push(val);
         n++;
    }
    void pop(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return ;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    int top(){
       if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return -1 ;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int valtop=q1.front();
        q2.push(valtop);
        q1.pop();
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return valtop;
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