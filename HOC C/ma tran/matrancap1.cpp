#include<iostream>
#include<time.h>
#include<stdlib.h>
void nhapn(int &n)
{
	do{
		printf("Nhap ma tran cap: ");
		scanf("%d",&n);
	}while(n<0||n>100);
}

void taomatran(int a[3][3],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			int t;
			while(t =0 ){
				if(a[i][j]+a[i++][j++]==10 and a[i][j]+a[i][j++]==10 ){
			a[i][j]=rand()%(9);
			t++;
		}
		}
	}
}
void xuatmatran(int a[3][3],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			{
				printf("%4d",a[i][j]);
			}
		printf("\n");	
	}
}
int main(){
	int n,	a[3][3];
	nhapn(n);
	taomatran(a,n);
	xuatmatran(a,n);
}














