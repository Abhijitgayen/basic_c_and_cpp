#include<bits/stdc++.h>
using namespace std; 
//need to work
 long long mearge( int * arr, int l , int mid , int r){
     long long inv=0;
      int temp[r-l+1];
     int i=l;
     int j=mid+1;
     int k=0;
     while(i<=mid && j<=r){
         if(arr[i]>arr[j]){
             temp[k++]=arr[j++];
                 inv=inv+((mid+1)-i);
                   }
         else{
             temp[k++]=arr[i++];
              
         }
     }
     while(i<=mid){
         temp[k++]=arr[i++];
     }
     while(j<=r){
         temp[k++]=arr[j++];
     }
     for(int i=l;i<=r;i++){
         arr[i]=temp[i-l];
              }
     return inv;
 }
 long long mearge_sort( int * arr, int l, int r){
     long long inv =0;
     if(l<r){
         int mid=(l+r)/2;
         inv += mearge_sort(arr,l,mid);
        inv += mearge_sort(arr,mid+1,r);
        inv +=mearge( arr, l, mid, r);
     }
     return inv;
 }
int main(){
     int n;
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<mearge_sort( arr, 0,n-1)<<endl;
    return 0;
}