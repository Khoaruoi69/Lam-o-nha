#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char *a[5],*b[5];
	int i,j;
	char c[5][10];
	printf("\n Enter string: ");
		scanf("%s",c[i]);
	for(i=0;i<5;i++){
		a[i]=c[i];
		printf("\nax%s",a[i]);
	}
	for(i=5;i>0;i--){
		b[i]=c[i];
		printf("\n%s",b[i]);
	}
/*	if(strcmp(a,b)=0){
		printf("\n%s",c[i]);
	}
	else{
		printf("\n :>>>><<<<<:");
	}*/
	
}
