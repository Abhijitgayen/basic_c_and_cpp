#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char st2[20],st1[20];
	int i,j,temp;
	printf("Enter a string1 :");
	gets(st1);
	printf("Enter a string2 :");
	gets(st2);
	//if(!strcmp(st1,st2))printf("they are same");
	//else printf("not same");
 	for(i=0;st1[i]!='\0';i++);
 	for(j=0;st2[j]!='\0';j++);
 	if(i!=j)printf("Not same string");
 	else{
 		for(i=0;st1[i]!='\0';i++){
 			if(st1[i]==st2[i]) temp=1;
 			else temp=0;
		 }
		 if(temp==1)printf("those two strings are equal");
 		
	 }
	getch();
	return 0;
}
