/* this is insertion sort for sorting element in the array*/
/*ran time for best case is O(1)*/
/*ran time for warst case is O(n^2)*/
/*ran time for avarage case is O(n^2)*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void insertionSort(int arr[], int n){
    int i;
    for (i=1;i<n;i++){
       int key=arr[i];
       int j=i-1;
       while((j>=0)&&(arr[j]>key)){
           arr[j+1]=arr[j];
           arr[j]=key;
           j--;
       }
    }
}
int main (void){
    int arr[]={1,2,8,45,126,-25,4};
    int n= (sizeof(arr)/sizeof(int));
    insertionSort(arr,n);
    printf("After insertionSort the array is:\n\t");
    int i;
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n\n");
    return 0;
}