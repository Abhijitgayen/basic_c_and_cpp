#include<stdio.h>
//reverser if a interger number
int main(){
	int n,res;
	printf("enter the number:");
	scanf("%d",&n);
	res=0;
	while(n!=0){
		res=res*10+(n%10);
		n=n/10;	
	}
	printf("reverse of the given number is:%d",res);
	
	return 0;
}
