#include<stdio.h>
//type cousting
int main (){
	float x;
	x= 7/5;
	printf("%f",x);
	x= (float)(7/5);
	printf("\nType cousting is not work :%f",x);
	x= (float)7/(float)5;
	printf("\nAfter type cousting :%f\n",x);
	int a=12;/*float operation int --> float(not int)*/
	float b=12.6;
	printf("value of %d /%f is :%f",a,b,b/a);
	char ch='a';
	printf("\ncousting of %c in integer is :%d\n",ch,(int)(ch));
	
	return 0;
}
