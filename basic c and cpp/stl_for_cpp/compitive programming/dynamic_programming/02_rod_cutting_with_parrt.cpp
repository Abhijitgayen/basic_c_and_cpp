#include<bits/stdc++.h>
using namespace std;
/*this is a tabulation method of dynamic programming*/
void rod_cuting( int * arr, int * pos,int * cost ,int n){
    pos[0]=0;/*position of cuting of rod of size n*/
    cost[0]=0;
    for(int j=1;j<=n;j++){
        int q=-1000;
        for( int i=1;i<=j;i++){
            if(q<(arr[i]+cost[j-i])){
                q=arr[i]+cost[j-i];
                pos[j]=i;
            }
        }
        cost[j]=q;
    }
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n+1]={0};
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    int pos[n+1]={0};
    int cost[n+1]={0};
    rod_cuting(arr, pos,cost,n);
    cout<<"max cost for cutting rod  : "<<cost[k]<<endl;
    cout<<"Position is"<<endl;
    int p=k;
    while(k>0){
        cout<<pos[k]<<" ";
        k=k-pos[k];
    }cout<<endl;
    cout<<"Cost is respect partition is  : "<<endl;
     while(p>0){
        cout<<cost[pos[p]]<<"+";
        p=p-pos[p];
    }cout<<"0"<<endl;
    return 0;
}