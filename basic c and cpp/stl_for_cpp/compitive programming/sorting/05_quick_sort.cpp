#include<bits/stdc++.h>
using namespace std;
void swap( int * a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int position_privot(int arr[],int  l,  int r){
    /*Randomized sampailing  make the algarithm firster*/
    /*start*/
    int ran =rand();
    int poi;
    poi=l+ran%(r-l+1);
    /*end*/
    swap(&arr[poi],&arr[r]);
     int privot= arr[r];
     int i=l-1;
     for(int j=l;j<=r-1;j++)//we compaer all elements before prevot
     {
         if(arr[j]<=privot){
             i++;
             swap(&arr[i],&arr[j]);
         }
     }
     swap(&arr[i+1],&arr[r]);
     return (i+1);    
}
void quicksort( int arr[], int l, int r){
    if(l<r){
        int p= position_privot( arr, l, r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort( arr,0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
 