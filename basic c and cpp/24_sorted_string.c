#include<stdio.h>
#include<string.h>
//programming to short 10 string
#define n 10
int main(){
	char str[n][20];
	char temp[20];
	printf("Enter the name:");
	int i,j,k;
	for(i=0;i<n;i++){
	gets(str[i]);	
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("then the sorted array of the string is:\n");
	for(i=0;i<n;i++){
		puts(str[i]);
	}
	return 0;
}
