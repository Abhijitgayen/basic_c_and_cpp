#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=1;
        for(;j<=(n-i);j++){
            cout<<"  ";
        }
        for(;j<=(n+i-1);j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}