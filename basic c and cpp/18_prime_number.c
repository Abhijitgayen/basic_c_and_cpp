#include<stdio.h>
//cheack prime or not
int main(){
	printf("enter the number:");
	int n,i,j;
	scanf("%d",&n);
	j=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0)j++;
	}
	if(j<=1)
	printf("\nenter number is a prime numnber..");
	else printf("\nnot a prime number..");
	return 0;
}
