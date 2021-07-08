#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    int key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    int flg=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            flg=1;
            cout<<"YES"<<endl;
        }
    }
    if(flg==0){
        cout<<"NO"<<endl;
    }
}