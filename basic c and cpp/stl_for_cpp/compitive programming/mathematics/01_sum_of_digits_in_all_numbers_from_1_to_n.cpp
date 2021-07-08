#include<bits/stdc++.h>
using namespace std;
long sumofdigits(int n){
    long sum =0;
    int last;
    while(n>=1){//or n>0
        last=n%10;
        n=n/10;
        sum+=last;
    }
    return sum;
}
long sumofdigits1ton(int n){
    long total=0;
    for(int i=1;i<=n;i++){
        total+=sumofdigits(i);
    }
    return total;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofdigits1ton(n)<<endl;
    return 0;
}