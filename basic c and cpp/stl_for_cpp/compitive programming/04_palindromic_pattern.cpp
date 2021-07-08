#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for( j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        int a=i,b=2;
        for(;j<=n;j++){
            cout<<a--<<" ";
        }
        for(;j<=(n+i-1);j++){
            cout<<b++<<" ";
        }
        cout<<endl;
    }
    return 0;
}