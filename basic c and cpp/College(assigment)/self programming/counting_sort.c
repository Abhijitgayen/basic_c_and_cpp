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
void counting_sort(int arr[],int n, int k){
    int* count=(int*)malloc((k+1)*(sizeof(int)));
    int i;
    for(i=0;i<k+1;i++){
        count[i]=0;
    }
    
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    
    int* b=(int*)malloc((n)*(sizeof(int)));
    for(i=n-1;i>=0;i--){
           b[--count[arr[i]]]=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=b[i];
    }
    

}
int main(void){
    int arr[]={12,2,4,8,9,6,7,8,13};
    int n = (sizeof(arr)/sizeof(int));
    int k=max(arr,n);
    printf("%d",n);
    counting_sort(arr,n,k);
    printf("After counting sort the sorting array .");
    print(arr,n);
    return 0;
}