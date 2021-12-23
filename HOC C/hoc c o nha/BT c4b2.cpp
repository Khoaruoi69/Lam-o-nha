#include<stdio.h>
int main(){
	int size=10;
	for(int i=0;i<=size; i++){
		printf(" * ");
	}
		printf("\n");
		for(int i=size/2;i>0; i--){
			for(int j=i;j>0;j--){
				printf(" * ");
			}
			printf("   ");
		for(int j=size/2-i;j>0;j--){
				printf("      ");
			}
		for(int j=i;j>0;j--){
				printf(" * ");
			}
				
			printf("\n");
}
	for(int i=0;i<=size; i++){
		printf(" * ");
	}
}
