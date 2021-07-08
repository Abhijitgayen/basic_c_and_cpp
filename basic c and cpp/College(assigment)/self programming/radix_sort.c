#include<stdio.h>
#include<stdlib.h>
int max( int arr[], int n){
    int max=0,i;
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return(max);
}
void print(int arr[], int n){
    int i;
    printf("\n\nthe array is");
    for(i=0;i<n;i++){
        printf("\n\t%d",arr[i]);
    }
    printf("\n\n");
}
void counting_sort(int arr[],int n,int pos){
    int* count=(int*)malloc((10)*(sizeof(int)));
    int i;
    for(i=0;i<10;i++){
        count[i]=0;
    }
    
    for(i=0;i<n;i++){
        count[(arr[i]/pos)%10]++;
    }
    for(i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    int* b=(int*)malloc((n)*(sizeof(int)));
    for(i=n-1;i>=0;i--){
           b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=b[i];
    }
}
void radix_sort(int arr[],int n){
    int k=max(arr,n),pos;
    for(pos=1;(k/pos)>1;pos*=10){
          counting_sort(arr,n,pos);
       }
}
int main(void){
    int arr[]={122,12,4,18,90,602,17,1455,214,847,1211,45,78,15488,5445,413};
    int n = (sizeof(arr)/sizeof(int));
    radix_sort(arr, n );
    printf("After radix sort the sorting array .");
    print(arr,n);
    return 0;
}
