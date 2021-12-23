#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("\nEnter bang cuu chuong: "); scanf("%d",&n);
/*		for(int j=1;j<=n;j++){
			printf(" %d*%d=%d",n,j,n*j);
			printf("\n");
		}*/
	for(int i=1;i<=n;i++){
			for(int k=1;k<=n;k++){
				printf("%d*%d=%d",k,i,i*k);
				printf("\n");
			}
			printf("********\n\n");
		}
}
