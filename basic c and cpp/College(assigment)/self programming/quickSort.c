/*here we see the programming about quick sort(sorting elemenrt of array) */
/*ran time for best case is O(1)*/
/*ran time for warst case is O(n^2)*/
/*ran time for avarage case is O(n logn)*/
#include<stdio.h>
#include<stdlib.h>
#define max 1000
void swap(int arr[], int c, int d){
    int temp=arr[c];
    arr[c]=arr[d];
    arr[d]=temp;
}
int partition( int arr[], int a , int b){
    int x=arr[a];
    int j,i=a;
    for(j=a+1;j<=b;j++){
        if(arr[j]<x){
            i++;
            swap(arr,i,j);
        }
    }swap(arr,a,i);
    return i;
}
void quickSort( int arr[],int l, int r){
    if(l<r){
        int q=partition( arr, l, r);
        quickSort(arr,l,q-1);
        quickSort(arr,q+1,r);


    }
}
int main(void){
     int arr[]={12,2,3,8,7,1,5,9};
     int n=sizeof(arr)/sizeof(int);
    
    int i;
    quickSort(arr,0,n-1);
    printf("after sorting the array is:");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n\n");
    return 0;
}
