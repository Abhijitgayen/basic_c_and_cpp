#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,op;
	do{	
		printf("\nchoose operation:\n\t1.\"+\"\n\t2.\"-\"\n\t3.\"/\"\n\t4.\".\"\n\t5.exit\nchoose:");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\nEnter 1st number(integer):");
				scanf("%d",&num1);
				printf("Enter 2nd number(integer):");
				scanf("%d",&num2);
				printf("\n\t>>>%d + %d is :%d",num1,num2,num1+num2);
				break;
			case 2:
				printf("\nEnter 1st number(integer):");
				scanf("%d",&num1);
				printf("Enter 2nd number(integer):");
				scanf("%d",&num2);
				printf("\n\t>>>%d - %d is :%d",num1,num2,num1-num2);
				break;
			case 3:
				printf("\nEnter 1st number(integer):");
				scanf("%d",&num1);
				printf("Enter 2nd number(integer):");
				scanf("%d",&num2);
				printf("\n\t>>>%d / %d is :%f",num1,num2,(float)num1/num2);
				break;
			case 4:
				printf("\nEnter 1st number(integer):");
				scanf("%d",&num1);
				printf("Enter 2nd number(integer):");
				scanf("%d",&num2);
				printf("\n\t>>>%d * %d is :%d",num1,num2,num1*num2);
				break;
			case 5:
				printf("Enter 1st number(integer):");
				scanf("%d",&num1);
				printf("Enter 2nd number(integer):");
				scanf("%d",&num2);
				printf(">>>teminating.....");
				break;
			default :
				printf("\n\t>>>Enter correct choies..");
				break;
		}
	}while(op!=5);
	return 0;
}
