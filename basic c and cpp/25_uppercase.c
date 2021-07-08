#include<stdio.h>
int main (){
	char st[20];
	int i;
	printf("Enter a string :");
	gets(st);
	printf("\nupper case of the enter string is:");
	for(i=0;st[i]!='\0';i++){
		if(st[i]>='a' && st[i]<='z'){
			putch(st[i]-32);
		}
		else putch(st[i]);
	}
	printf("\nlenth of the string is:%d",i);
	return 0;
	getch();
}
