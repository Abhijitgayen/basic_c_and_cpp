#include<stdio.h>
//here we focuse on loop
/*there are three type of loop
1.do while loop
2.while loop
3.for loop*/
int main(){
	int i;
	for(i=0;i<10;i++)printf("value in for loop  is =%d\n",i);
	int j=0;
	while(j<10){
		printf("value in while loop is:%d\n",j);
		j++;
	}
	int k=0;
	do{
		printf("here we ran the do while loop value=%d\n",k);
		k++;
	}while(k<10);
	return 0;
}
