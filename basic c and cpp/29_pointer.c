#include<stdio.h>
//declaring a pointer
//datatype *ponter_name;

//Storing address into pointer
//int i=50,*p;
//p=&i;

//pointer variables always point to the corresponding type
//of data. 
int main (){
	/*int a=12,*p,*q;
	p=&a;
	printf("address of a is:%u\n",&a);
	printf("adress of p is :%u\n",&p);
	printf("value of p is :%u\n",p);
	printf("value of a from a =%d\n",a);
	printf("value of a form p =%d\n                                                                                 -              ",*p);
	//in the pointer we store the address of a
	return 0;*/
	int x,y,*p;
	x=12;
	p=&x;
	y=*p;
	printf("Value of y is : %d",y);
	printf("\nvalue of x of the from *(&x)is :%d",*(&x));
	printf("\nadd 1 with *p we have:%d then x=%d",++(*p),*p);
	
	return 0;
}
