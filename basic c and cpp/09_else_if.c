#include<stdio.h>
//use of if,else,else if condition
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18)printf("\tYou able for appling Driving licence....");
	else if(age==18)printf("\tWe are not decide about the driving licence..");
	else printf("\tYou are not able to apply this..");
	return 0;
}
