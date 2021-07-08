#include<bits/stdc++.h>
using namespace std;

int pivot_index(int arr[],int n){//this is O(n^2) time complexity of function
    for ( int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i-1;j>=0;j--){
            sum1+=arr[j];
        }
        for(int j=i+1;j<n;j++){
            sum2+=arr[j];
        }
        if(sum1==sum2){
            return i;
        }
    }
    return -1;
}
int pivot_index( int arr[],int n,int k){//time complexity is O(n) so it is agood algarithms
    int sum=0,left=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0; i<n;i++){
        if(left==sum-left-arr[i]){
            return i;
        }
        left+=arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pivot_index(arr,n,4)<<endl;
    return 0;
}