#include<bits/stdc++.h>
using namespace std;
void allprimefactor( int n){
    int *spf=new int[n+1];
    for( int i=0;i<n+1;i++){
        spf[i]=i;
    }
    for ( int i=2;i<=n; i++){
        if(spf[i]==i){
            for( int j=i*i;j<n+1;j+=i){
                if(spf[j]==j)
                         spf[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    allprimefactor(n);
    return 0;
}
