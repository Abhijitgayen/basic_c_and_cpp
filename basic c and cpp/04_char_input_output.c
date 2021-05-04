#include<stdio.h>
#include<conio.h>
// use of var=getchar(), var=getch(),var=getche(),putchar(var),putch(var)
int main(){
	char x,y,z;
	printf("Enter 1st character: ");
	x = getchar();//take only 1st word form a string
	printf("Enter 2nd character: ");
	y = getche();//when you enter a charcter then you do not need to click enter
	//it also show the enter character 
	printf("\nEnter 3rd character: ");
	z = getch();//it does not show the enter charcter
	//it is work same as getche();
	printf("\nFirst character is ");
	putchar(x);
	printf("\nSecond character is ");
	putch(y);
	printf("\nThird character is ");
	putchar(z);
	
	return 0;
}
