/*C operators are classified as follows:
1) Arithmetic Operators
2) Relational Operators
3) Logical Operators
4) Assignment Operator
5) Increment & Decrement Operator
6) Conditional Operator
7) Bit wise Operators
8) Special Operators*/

//arithmetic operator
/* 
'+':addition
'-':subtraction
'*':multipilicatin
'/':division
'%':modulo division(remainder after division)
*/

//relation operators
/*
'>':greater than
'>=':greater than or equal to
'<':less than
'<=':less than or equal to
'==':equal to
'!=':not equal to
*/

//logical operators
/*
'&&':logical And
'||':logical or
'!':logical not
*/

//Assigment operators
/*
a=a+1; --> a +=1 ;
a=a-1; --> a-=1;
a=a*(n+1); --> a*=(n+1);
a=a/(n+1); -->a/=(n+1);
a=a%b ;--> a%=b;
*/

//increment & decrement operators
/*
m=m+1; --> m++; and ++m; 
m++ : printf("%d",m++); -->m
++m : printf("%d",++m); -->m+1
m=m-1 ; --> m--; and --m;
m--: printf("%d",m--); -->m
--m : printf("%d",--m); -->m-1
*/

//coditional operators
/*
exp1 ? exp2: exp3 ;
int a=12 b=13;
x=(a>b)? a:b ;// x is assigned to be a maximum no between a and b
*/

//special operators
/* comma operators:
Since comma operator has lowest precedence of all operators, the parentheses are
necessary.
In for loops: for(n=1,m=10;n<=m;n++,m++)
In while loops: while(c=getchar(), c!='10')
Exchanging values: t=x, x=y, y=t;
*/
#include<stdio.h>
int main(){
	int m=10;
	printf("m=10 and m++=%d\n",m++);
	//m=11;
	printf("m=11 and ++m=%d",++m);
	//m=12;
	int a=12 ,b=13;
	int x=(a>b)? a:b;
	printf("\nmax between %d and %d is :%d\n",a,b,x);
    char c;
    int i;
	while(c=getche(),i=1,c!='1'){
    	printf("\n%d>>>it is ok\n",i);
    	printf("%d>>>it ran it ran extra one times\n",i);
    	i++;
	}	
	return 0;
}
