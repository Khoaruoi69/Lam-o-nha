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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=9;j++){
			printf(" \n%d * %d = %d",i,j,(i*j));
		}
		printf("\n");
	}
	return 0;
}
