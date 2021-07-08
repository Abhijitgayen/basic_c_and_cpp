#include<bits/stdc++.h>
using namespace std;
int no_partition( int arr[], int n){
    int sum[n];
    int sums=0;
    for( int i=0;i<n;i++){
        sums +=arr[i];
        sum[i]=sums;
    }
    if(sums%3 != 0){
        return -1;
    }
    int onepart=sums/3;
    for( int i=0;i<n;i++){
        cout<<sum[i]<<endl;
    }
    return 0;
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<no_partition(arr, n)<<endl;
    return 0;
}