#include<stdio.h>
int main(){
	printf(">>how many number you want to enter:");
	int n,i;
	scanf("%d",&n);
	int arr[n+1];
	for(i=0;i<n;i++){
		printf("\tenter %3d no :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n>>the array is :\n");
	for(i=0;i<n;i++){
		printf("\tenter %3d no is : %d\n",i+1,arr[i]);
	}
	return 0;
}
