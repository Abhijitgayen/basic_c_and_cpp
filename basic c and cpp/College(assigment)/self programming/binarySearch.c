/*this is code of binary search for search element in the array*/
/*ran time for best case is O(1)*/
/*ran time for warst case is O(logn)*/
/*ran time for avarage case is O(logn)*/


#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int a, int b, int x){
    if(a<b){
        int mid=(a+b)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            binarySearch(arr,a,mid-1,x);
        }
        if(arr[mid]< x){
            binarySearch(arr,mid+1,b,x);
        }
    }
else
{
     return -1;
}

}
int main(void){
    int arr[]={1,12,-8,14,1,19};
    int n= sizeof(arr)/sizeof(int);
    int x=190;
    int k=binarySearch(arr,0,n,x);
    if(k==-1)printf("\n\telement is not in array....\n\n\n");
    else
    {
        printf("\n\telement in the array....\n\n\n ");
    }
    
    return 0;
}