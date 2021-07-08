/*this is programming about the marge sort(sorting element in the array)*/
/*ran time for best case is O(1)*/
/*ran time for warst case is O(n logn)*/
/*ran time for avarage case is O(n logn)*/
#include<stdlib.h>
#include<stdio.h>
#define max 100

void marge(int arr[],int temp[], int a, int mid, int b){
    int i=a;
    int j=mid+1;
    int k=a;
    while((i<=mid)&&(j<=b)){
        if(arr[i]>=arr[j]){
            temp[k++]=arr[j++];
        }
        else
        {
            temp[k++]=arr[i++];
        }
        
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=b){
        temp[k++]=arr[j++];
    }
    for(i=a;i<=b;i++){
        arr[i]=temp[i];
    }
}
 
void margeSort( int arr[], int temp[],int a, int b ){
    if(a<b){
        int mid=(a+b)/2;
        margeSort(arr,temp,a,mid);
        margeSort(arr,temp,mid+1,b);
        marge(arr,temp,a,mid,b);
        }
}

int main( void){
    int arr[max];
    printf("how many eletens in the array:");
    int n,i;
    scanf(" %d",&n);
    printf("Enter all data of the array:\n");
    for(i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
     int* temp= (int*)malloc(n*sizeof(int));
     margeSort(arr,temp,0,n-1);
     printf("after marge sort\n\t");
     for(i=0;i<n;i++){
         printf("\t%d",arr[i]);
     }
     return 0;
 }