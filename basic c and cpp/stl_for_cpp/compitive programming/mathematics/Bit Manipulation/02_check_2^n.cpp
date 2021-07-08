/* check the element is power of 2 or not using bit manipulation */
#include<bits/stdc++.h>
using namespace std;
bool isPower2( int n){
    return (n && !(n & (n-1)));
}
int main(){
    int n;
    cin>>n;
    cout<< isPower2(n)<<endl;
    return 0;
}