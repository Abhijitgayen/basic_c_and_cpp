#include<bits/stdc++.h>
using namespace std;
//given 2xN tailing board you need to taling this board by 1x2 tails
//this is same as fibonaci sequence
int tailing( int n){
    if(n==0 || n==1){
        return n;
    }
    return tailing(n-1) +tailing(n-2);
}
int main(){
    int n=4;
    cout<<tailing(n)<<endl;
    return 0;
}