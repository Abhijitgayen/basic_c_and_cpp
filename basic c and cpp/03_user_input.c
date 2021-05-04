#include<stdio.h>
// for take any input from user we use scanf("%format_code",&var);
//%c->char
//%d->int
//%f->float
//%s->one word string
//%[^\n] -> for big string
int main(){
	char intro[45],you[45];
	printf("Give introduction about you:");
	scanf("%[^\n]",intro);//you may use %s and cheack it take only one word
	printf(">>>Thank you for your introdection :%s\n",intro);
	printf("How are you:(only enter one word string):");
	scanf("%s",you);
	printf(">>>%s\n",you);//we need not use & here but other case we need to 
	float var1 ,var2;
	printf("Enter 1st floating number:");
	scanf("%f",&var1);
	printf("Enter 2nd floating number:");
	scanf("%f",&var2);
	printf(">>>divison of this number :%f",var1/var2);
	return 0;
}
