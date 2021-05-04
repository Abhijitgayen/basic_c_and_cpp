 #include<stdio.h>
 int main(){
 	int r,c,i,j;
 	printf("enter the row:");
 	scanf("%d",&r);
 	printf("enter the colum:");
 	scanf("%d",&c);
 	int darr[r+1][c+1];
 	printf("enter the elemet of the metrix:\n");
 	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			printf("\t A[%d][%d]=",i+1,j+1);
 			scanf("%d",&darr[i][j]);
		 }
	 }
	printf("the matrix is :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %5d",darr[i][j]);
		}printf("\n");
	}
 	return 0;
 }
