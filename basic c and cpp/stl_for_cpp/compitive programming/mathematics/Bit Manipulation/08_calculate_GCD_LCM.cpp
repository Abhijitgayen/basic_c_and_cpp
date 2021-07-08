#include<bits/stdc++.h>
/*We try to find the gcd of two number using Euclidean algarithms */
using namespace std;
int gcd( int a, int b){
    int A,B;
    A= (a< b) ? b : a;
    B= (a < b) ? a : b;
    int rem=1;
    while(rem!=0){
        rem=A%B;
        A = B;
        B = rem;  
    }
    return A;
}
 int lcm ( int a , int b ){
     return (a*b)/gcd(a,b);
 }
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
    return 0;
}