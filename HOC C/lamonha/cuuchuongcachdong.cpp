#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	do{
		printf("\nbang cuu chuong:"); scanf("%d",&n);
		if(n<=0){
			printf("\nnhap sai nhap lai");
		}
	}while(n<0);
	for(int i=1;i<=10;i++){
		printf("\n");
		for(int j=1;j<=7;j++){
		
			printf(" \t%d * %d = %d",i,j,(j*i));
			
		}
		
	//	printf("\t");
	}
	return 0;
}
