#include<stdio.h>
#include<conio.h>
int main(){
	int n=11;
	for(int i=n;i>0;i--){
		for(int j=0;j<20;j++){
			printf("*");
		}
		for(int j=i;j>0;j--){
			printf("*");
		}
		for(int j=0;j<n-i;j++){
			printf("-");
		}
    	for(int j=0;j<n-i;j++){
			printf("-");
    	}
		for(int j=i;j>0;j--){
			printf("*");
		}
		for(int j=0;j<20;j++){
			printf("*");
		}
			printf("\n");
	}
	for(int i=10;i>0;i--){
		for(int j=0;j<10-i;j++){
			printf("*");
		}
		for(int j=i*2-1;j>0;j--){
			printf("-");
		}
		for(int j=i;j<i*2-1;j++){
			printf(".*");
		}
		for(int j=0;j<i/2*3+1;j++){
			printf("$");
		}
		for(int j=0;j<10;j++){
			printf("-");
		}
		printf("\n");
	}
	for(int i=10;i>0;i--){
		for(int j=i;j>0;j--){
			printf("*");
		}
		for(int j=i*2-1;j>0;j--){
			printf("-");
		}
		for(int j=0;j<1;j++){
			printf(".*");
		}
		printf("\n");
	}
	
}
