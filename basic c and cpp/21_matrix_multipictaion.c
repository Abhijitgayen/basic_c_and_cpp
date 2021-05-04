#include<stdio.h>
int main(){
	int r1,c1,r2,c2,i,j,k;
	printf("enter the row  and cloum of metrix A :");
	scanf("%d %d",&r1,&c1);
	int a[r1+1][c1+1];
	printf("enter the element of A:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("\tA[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);	
		}
	}
	printf("\nmatrix a is\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf(" %3d ",a[i][j]);	
		}printf("\n");
	}
	printf("enter the row  and cloum of metrix B :");
	scanf("%d %d",&r2,&c2);
	int b[r2+1][c2+1];
	printf("enter the element of B:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("\tB[%d][%d]=",i+1,j+1);
			scanf("%d",&b[i][j]);	
		}
	}
	printf("\nmatrix B is \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf(" %3d ",b[i][j]);	
		}printf("\n");
	}
	if(c1==r2){
		printf("After multipilcation AB :\n");
		int ab[r1+1][c2+1];
		for(i=0;i<r1;i++){
			for(k=0;k<c2;k++){
				ab[i][k]=0;
				for(j=0;j<c1;j++){
					ab[i][k]+=a[i][j]*b[j][i];	
				}
			}
		}
		printf("AB matrix is :\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf(" %3d ",ab[i][j]);
			}printf("\n");
		}
	}
	else printf("\t>>>multipication is not possible...");
	
	
	return 0;
}
