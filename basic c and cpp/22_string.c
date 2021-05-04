#include<stdio.h>
#include<string.h>
//here we cover the parts 
//1.Reading and writting a string
//2.Combining string together
//3.Copy one string to another
//4.Extract aportion from the string

// for input of string we use
//char nmae[10];
//scanf("%s",name);/*we get only one word*/
//scanf(" %[^\n]",name);/*Do not forget to give space before %[^\n]. We able to read all word in this string*/
//do not neede to use & for each case.
// for out put of this string we use "%s".
// we use gets(variable); puts(variable); 
int main(){
	char str[10];/*a string contain atmost 11 words*/
	char strs[4][10];/*5 string that are contain atmost 11 words*/
	/*char name[12];
	printf("Enter the name:");
	scanf(" %[^\n]",name);
	printf("the name that you enter is :%s",name);*/
	//here we use gets(); and puts();
	printf("\nUse of gets(); and puts(); \n");
	printf("Enter name :");
	gets(str);//we are note able to those two in pone code
	printf("enter name is:");
	puts(str);
	return 0;
}
