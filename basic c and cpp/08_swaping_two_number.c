#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2;
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	printf("Numbers before swapping : num1=%d num2=%d\n",num1,num2);
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("Numbers after swapping :num1=%d num2=%d",num1,num2);
	return 0;
}
