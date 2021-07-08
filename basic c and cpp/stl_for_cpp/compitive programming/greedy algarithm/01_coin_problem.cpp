#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> coin;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        coin.push_back(val);
    }
    sort(coin.begin(), coin.end());
    int count=0;
    for(int i=(coin.size() -1);i>=0;i--){
        count+=(k/coin[i]);
        int a=(k/coin[i]);
        while(a>=1){
            cout<<coin[i]<<" ";
            a--;
        }
        k=k% coin[i];
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}