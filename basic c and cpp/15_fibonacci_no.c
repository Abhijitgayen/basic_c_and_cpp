#include<stdio.h>
int main(){
	int n, n1=0,n2=1,n3;
	printf("Enter the no to see all no of fubonaci series upto this no:");
	scanf("%d",&n);
	printf("The fiboncci series upto %d is:\n",n);
	printf("\t%d\t%d",n1,n2);
	int i;//if you use do while loop it will be very beautifull 
	for(i=2;i<n;i++){
		n3=n1+n2;
		printf("\t%d",n3);
		n1=n2;
		n2=n3;
	}
	printf("\n\n");
	return 0;
}
