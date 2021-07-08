#include<bits/stdc++.h>
using namespace std;

int isprime(int n){
    for(int i=2;i<(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int largeprime(int n){
    if(isprime(n)) return n;
    else{
    vector<int>v;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isprime(i)){
                v.push_back(i);
            }
        }
    }
    return v[v.size()-1];
    }
}

int main(){
    int n;
    cin>>n;
    cout<<largeprime(n)<<endl;
    return 0;
}