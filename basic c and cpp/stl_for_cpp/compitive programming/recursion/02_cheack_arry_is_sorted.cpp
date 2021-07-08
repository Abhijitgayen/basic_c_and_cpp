#include<bits/stdc++.h>
using namespace std;
bool is_sorted( int *arr, int n){
    if(n==1){
        return true;//this is a base case;
    }
    return(arr[1]>=arr[0] && is_sorted(arr+1,n-1));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<is_sorted(arr,n)<<endl;

    return 0;
}