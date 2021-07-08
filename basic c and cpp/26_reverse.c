#include<stdio.h>
int main(){
	char st[20];
	int i;
	printf("Enter a string :");
	gets(st);
	printf("\nreverse of the enter string is:");
	for(i=0;st[i]!='\0';i++);
	/*get the length of this string*/
	/*reverse part of this string*/
	//if i is length then st[0],st[1]....,st[i-1];
	for(i=i-1;i>=0;i--){
		//printf("i=%d",i);
		putch(st[i]);
	}
	return 0;
}
