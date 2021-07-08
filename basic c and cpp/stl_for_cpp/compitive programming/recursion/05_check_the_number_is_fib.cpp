#include<bits/stdc++.h>
using namespace std;
int fibonaci( int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}
int main(){
    int key;
    cin>>key;
    int k=(key>5)? key : key+4;
    for(int i=0;i<=k ;i++){
        if(fibonaci(i)==key){
            cout<<"yes"<<endl;
            break;
        }
        if(fibonaci(i)>key){
            cout<<"no"<<endl;
            break;
        }
    }
    return 0;
}
