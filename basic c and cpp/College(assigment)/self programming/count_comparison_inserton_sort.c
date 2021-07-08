
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int insertionSort(int arr[], int n){
    int i;
     int count=0;
    for (i=1;i<n;i++){
       int key=arr[i];
       int j=i-1;
      
       while((j>=0)&&(arr[j]>key)){
           arr[j+1]=arr[j];
           count++;
           j--;
       } 
       if(key>= arr[j+1]){
       	count++;
	   }
	   arr[j+1]=key;
    } return count;
}
int main (void){
    int arr[]={1,12,8,5,6};
    int n= (sizeof(arr)/sizeof(int));
    int count=insertionSort(arr,n);
    printf("After insertionSort the array is:\n\t");
    int i;
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n\n%d\n\n",count);
    return 0;
}
