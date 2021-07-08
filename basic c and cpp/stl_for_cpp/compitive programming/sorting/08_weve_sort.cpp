#include<bits/stdc++.h>
using namespace std;
/* this is sort like wave such that
arr[i-1]>=arr[i]<=arr[i+1], i=1,3,5,7.....*/
void swap( int * arr, int a , int b){
    int temp=arr[b];
    arr[b]= arr[a];
    arr[a]=temp;
}
void wave_sort( int* arr, int n){
    for( int i=1 ; i< n;i=i+2){
        if( arr[i]>arr[i-1]){
            swap(arr, i, i-1);
        }
        if( (arr[i]>arr[i+1] )&& ( i<=n-2) ){
            swap( arr, i, i+1);
        }
    }
}
int main(){
    int n;
     cin>>n;
     int arr[n];
     for( int i=0;i< n;i++){
         cin>>arr[i];
     }
     wave_sort( arr ,n);
     for( int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}