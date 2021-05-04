//display number of the folowing formart
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
/*
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<i+1;j++)
		printf("%4d",j);
		printf("\n");
	}
	return 0;
}*/
//display this pattern
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
/*#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<i+1;j++)
		printf("%4d",i);
		printf("\n");
	}
	return 0;
}*/
//dispaly this pattern
/*
1 1 1 1 1
2 2 2 2 
3 3 3 
4 4
5
*/
/*
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1-i);j++)
		printf("%4d",i);
		printf("\n");
	}
	return 0;
}*/
//dispaly this pattern
/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4 
5
*//*
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1-i);j++)
		printf("%4d",(n+1-j));
		printf("\n");
	}
	return 0;
}*/
//dispaly the pattern(pascal's Triangle)
/*
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
*/
#include<stdio.h>
#define m 30
int main(){
	int i,j,k,l,r;
	i=1;
	printf("Enter the no of Rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=m-3*i;j>=0;j--) printf(" ");
		for(k=1;k<=i;k++){
			if(k==1 || i==1)
			l=l;
			else
			i=()
		}
		
	}
	return 0;
}
