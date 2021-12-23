#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int n=0,item;
	char x[10][10];
	do{
			printf("String %d: ", n+1);
			scanf("%s",x[n]);
		}while(strcmp(x[n++],"END"));
		n=n-1;
	for(int item;item<n-1;item++){
		for(int i;i<n;i++){
			if(strcmp(x[item],x[i])>0||strcmp(x[item],x[i])<0){
				printf("%s",x[i]);
			}
		}
	}
		
}
