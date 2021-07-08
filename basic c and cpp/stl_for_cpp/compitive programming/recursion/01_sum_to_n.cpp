#include<bits/stdc++.h>
using namespace std;
int sum_to_n( int n){
    if(n==0){
        return 0;//base case ( very importent because with olut base case it is never stop)
    }
    return (n+sum_to_n(n-1));
}
int main(){
    int n;
    cin>> n;
    cout<<sum_to_n(n)<<endl;
    //cout<<"hello"<<endl;
    return 0;
}