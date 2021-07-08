// this is merge Divide Conquer algarithm to find inversiom of a array
// ran time for best case is O(1)
// ran time for warst case is O(n logn)
// ran time for avarage case is O(n logn)
#include<stdio.h>
#include<stdlib.h>
int marge(int arr[],int temp[], int a, int mid, int b){
    int i=a;
    int j=mid+1;
    int k=a,count=0;
    while((i<=mid)&&(j<=b)){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
            count=count+((mid-i)+1);
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
    return count;
}
 
int margeSort( int arr[], int temp[],int a, int b ){
    int count = 0;
    if(a<b){
        int mid=(a+b)/2;
        count += margeSort(arr,temp,a,mid);
        count += margeSort(arr,temp,mid+1,b);
        count += marge(arr,temp,a,mid,b);
        }
        return count ;
}

int main (void){
    int arr[]={4,8,9,1,2,4,3,1};
    int n= sizeof(arr)/sizeof(int);
    int* temp=(int*)malloc(n*sizeof(int));
    int count=margeSort(arr,temp,0,n-1);
    printf("inversion of this array is : %d\n\n",count);
    return 0;
    
}