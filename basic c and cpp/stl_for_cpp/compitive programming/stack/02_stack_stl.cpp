#include<bits/stdc++.h>
using namespace std;
// #include<stack>
int main(){
    stack< int> sk;
    int n, val;
    cin>>n;
    for( int i=0;i<n; i++){
        cin>>val;
        sk.push(val);
    }
    while(!sk.empty()){
        cout<<sk.top()<<"->";
        sk.pop();
    }cout<<endl;
    cout<<sk.empty()<<endl;
    cout<<sk.size()<<endl;
    cout<<"hello"<<endl;
    return 0;
}