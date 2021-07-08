/*this is brute froce algarithm for finding the inversion of any array */
/*ran time for best case is O(1)*/
/*ran time for warst case is O(n^2)*/
/*ran time for avarage case is O(n^2)*/

#include<stdio.h>
#include<stdlib.h>
#define Max 100
int main (void){
    int arr[]={4,8,9,1,2,4,3,1};
    int n= sizeof(arr)/sizeof(int);
    int i,j,k=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])k++;
            }
        }
    printf("the ionversion of this array is :%d \n\n",k);
    return 0;
}