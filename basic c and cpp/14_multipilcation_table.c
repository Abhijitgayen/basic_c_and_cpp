#include<stdio.h>
int main(){
	int col, row;
	printf("Enter no of colum of this matrix:");
	scanf("%d",&col);
	printf("Enter no of row of this matrix:");
	scanf("%d",&row);
	int i,j,c;
	for(i=1;i<col;i++){
		for(j=1;j<row;j++){
			printf("\t%d",i*j);	
		}printf("\n");
	}
	
	return 0;
}
