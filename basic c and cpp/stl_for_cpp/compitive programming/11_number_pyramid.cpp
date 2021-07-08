#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        int j=1;
        for(;j<=(n-i);j++){
            cout<<"  ";
        }
        for(;j<=(n+i-1);j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}