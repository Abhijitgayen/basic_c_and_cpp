#include<bits\stdc++.h.>
using namespace std;

int main(){
        int n;
        cin>>n;
        for (int i=1;i<=n;i++){
            int j;
            for(j=1;j<=i;j++){
                cout<<"* ";
            }
            for(;j<=(2*n -2*i+i);j++){
                cout<<"  ";
            }
            for(;j<=2*n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    return 0;
}
