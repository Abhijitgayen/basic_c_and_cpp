#include<stdio.h>
// there are there type of data(data_type var1,var2,var3;)
//1.primaery data type
//2. Derived data type
//3.user-defined data type

//primary data type:
// integer data type-->int, unsinged int,short int, long int,unsinged long int
// unsinged short int
// character type data --> char, unsinged char
// floating point data type --> float, double, long double


//derived data type
//those are called secondary data types that include arrays, function,refernce and pointers

//user-defined data type
//class,structure,union,Enum,typedef

//const->use to make a veriable constant
//volatile ->it is use to say we change this data later
// i.e ->  const int var1=45;

//format codes:
// %c-->single charater
// %d -->decemal integer
//	%ld -->long integer
//%lu -->unsinged long integer
//%x --> unsinged hexadecimal integer
// %f --> folating point
//%s--> string
int main(){
	const  int a =129895;
	printf(">>>Constant a = %x\n",a);
	int var1,var2;
	printf("Enter 1st integer :");
	scanf("%d",&var1);
	printf("Enter 2nd integer :");
	scanf("%d",&var2);
	printf(">>>sum of those two number is : %d\n",var1=var2);
	char hello[45]="hello i am abhijit";
	printf(">>> the string is :%s",hello);
	return 0;
}
