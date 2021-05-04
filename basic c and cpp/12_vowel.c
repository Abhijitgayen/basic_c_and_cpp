#include<stdio.h>
#include<conio.h>
main()
{
	char x;
	printf("Enter letter: ");
	x=getchar();
	if(isalpha(x)){
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'
	||x=='u'||x=='U')
	printf("The character %c is a vowel",x);
	else
	printf("The character %c is a consonant",x);}
	else printf("Enter the currect latter..");
	getch();
}

