#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int* arr;
	unsigned long long int count_com ;
}data;
void swap(int arr[], int c, int d){
    int temp=arr[c];
    arr[c]=arr[d];
    arr[d]=temp;
}
int partition( data array, int a , int b){
    int x=array.arr[a];//frist element as pivot
    int j,i=a;
    for(j=a+1;j<=b;j++){
    	array.count_com++;//1 st comparison
        if(array.arr[j]<x){
            i++;
            swap(array.arr,i,j);
        }
    }swap(array.arr,a,i);
    
    return i;
}
void quickSort( data array,int l, int r){
    if(l<r){
        int q=partition(array, l, r);
        quickSort(array,l,q-1);
        quickSort(array,q+1,r);


    }
}
int main(void){
	data array;
     FILE *fptr;
    fptr = fopen("a3test1.txt", "r");
    if (fptr == NULL) {
    printf("\n\n\tError....I am not able to read this file\n\n");
    }
    else{
    	int data;
    	long long int total=1;
    	while (!feof(fptr)){
		 fscanf(fptr, "%d", &data);
          total++;
			 }
		array.arr=(int*)malloc(total*(sizeof(int)));
       
        rewind(fptr);
         int i=0;
        int key;
         while (!feof(fptr)){
		 fscanf(fptr, "%d", &array.arr[i]);
             i++;
			 }
			 i--;

    fclose(fptr); 
    printf("no of element=%d",i);
    int n=i;
    quickSort(array,0,n-1);
    printf("after sorting the array is:");
    for(i=0;i<n;i++){
        printf("\n\t%d",array.arr[i]);
    }
    printf("\n no of comparison is as 1st element as pivot : %llu",array.count_com);
    printf("\n\n");
    return 0;
}
}
