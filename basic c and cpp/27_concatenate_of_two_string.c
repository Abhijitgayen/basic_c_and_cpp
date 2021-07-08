#include<stdio.h>
#include<conio.h>
int main(){
	char st2[20],st1[20];
	int i,j;
	printf("Enter a string1 :");
	gets(st1);
	printf("Enter a string2 :");
	gets(st2);
	printf("\nconcatenate of those two string is:");
	for(i=0;st1[i]!='\0';i++);/*get the length of those string*/
	for(j=0;st2[j]!='\0';j++);
	char st3[i+j];
	for(i=0;st1[i]!='\0';i++){
		st3[i]=st1[i];
	}
	int temp=i;
	for(j=0;st2[j]!='\0';j++){
		st3[temp]=st2[j];
		temp++;
	}
	puts(st3);
	getch();
	return 0;
}
