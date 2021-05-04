/*#include<stdio.h>
//use of if,else,else if condition
int main(){
	int age;
	A://BackWard jump
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18)printf("\tYou able for appling Driving licence....");
	else if(age==18)printf("\tWe are not decide about the driving licence..");
	else printf("\tYou are not able to apply this..");
	int i;
	printf("\nAre you want to cheak again(enter 11)?:");
	scanf("%d",&i);
	if(i == 11) goto A;
	else printf("\t>>>teminating....");
	getch();
	return 0;
}*/
/* Goto Statement(forward jump) in C Programming example */

#include <stdio.h>

int main(){
  int Totalmarks;
  printf(" \n Please Enter your Subject Marks \n ");
  scanf("%d", & Totalmarks);
  if(Totalmarks >= 50)goto Pass;
  else {goto Fail;}
  Pass:
     printf(" \n Congratulation! You made it \n");
  Fail:
     printf(" \n Better Luck Next Time \n"); 
  return 0;
}
