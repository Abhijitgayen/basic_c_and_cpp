#include<stdio.h>
#include<string.h>
//strlen(); strlwr(); strupr(); strrev(); strcpy(); strcmp(); strcmpi(); strcat(); 
int main()
{
	char str1[100],str2[100];
	int len;
	printf("enter the string1 :");
	gets(str1);
	printf("string1 is:");
	puts(str1);
	printf("enter the string2 :");
	gets(str2);
	printf("string2 is:");
	puts(str2);
	len=strlen(str1);
	printf("length of this string1 is: %d\n", len);
	printf("lowercase of this string1 is:");
	puts(strlwr(str1));
	printf("uppercase of this string1 is:");
	puts(strupr(str1));
	printf("reverse  of this string1 is:");
	puts(strrev(str1));
	char str3[100];
	strcpy(str3,str2);
	printf("copy the string2 in string3:%s",str3);
	//strcmp("their","there"); will return -1(-9 which is the numaric difference between ASCII 'i' and ASCII 'r').
	//strcmp("the","THE"); will return 1(32 which is the numaric difference between ASCII 't' and 'T').
	printf("the function return:%d",strcmp("their","there"));
	printf("\nthe function return:%d",strcmp("the","the"));
	//obser that it will return 0 if those strings are same elssse it will return either 1 or -1
	printf("\n compare \"the\" and \"The\" using function strcmpi(); is :%d",strcmpi("the","ThE"));
	printf("\nadd two string str1 and str2 is :%s",strcat(str1,str2));
	// there are mistake in this type of codes printf("%s",strcat('hello','wprld'));
	return 0;
}
