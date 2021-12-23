#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int k,i,n=0;
	char x[100][100];
	printf("\nEnter string : ");
	printf("\nType 'END' when over \n\n ");
	do{
		printf("String %d: ",n+1);
		scanf("%s",&x[n]);
	}while (strcmp(x[n++],"END"));
}
