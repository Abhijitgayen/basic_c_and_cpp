/* Sieve  of Eratostheness*/
#include<bits/stdc++.h>
using namespace std;
void allprime( int n){
    int temp[n+1]={0};
    for( int i=2;i<=n; i++){
        if(temp[i]==0){
            for( int j=i*i;j<=n; j+=i){
                temp[j]=1;
            }
        }
    }
    for( int i=2; i<=n ;i++){
        if(temp[i]==0)cout<<i<<" ";
    }
    


} 
int main(){
    int n;
    cin>>n;
    allprime(n);
    return 0;
}