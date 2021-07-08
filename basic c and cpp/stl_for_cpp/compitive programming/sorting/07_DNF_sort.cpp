#include<bits/stdc++.h>
using namespace std;
/*DNF -> dauch nationnal flag sort therea re three pointer . therea re only three disrtinct value in this array*/
void swap( int * arr, int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void dnf_sort( int * arr, int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(high>=mid){
        if(arr[mid]==0){
            swap( arr,low, mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap( arr, mid,high);
            high--;
        }
    }

}
 int main( ){
      int n;
     cin>>n;
     int arr[n];
     for( int i=0; i<n;i++){
         cin>>arr[i];// this array is contain there different value
         // we take here 0 , 1 ,2
     }
     dnf_sort(arr,n);
     for( int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
      return 0;
 }