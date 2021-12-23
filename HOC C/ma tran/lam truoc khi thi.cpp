#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void nhapn(int &n){
	printf("\nnhap ma tran cap: "); scanf("%d",&n);
}
void nhapmatran(int a[][100], int n ){
	srand(time(NULL));
	int min=1,max=9;
	for(int i=0;i<n;i++){
		for(int j= 0;j<n;j++){
			a[i][j]= rand()%10+1;
			a[i][j]=min + rand()%(max-min);
		}
	}
}
void xuatmatran(int a[][100], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}
int main(){
	int n,a[100][100];
	nhapn(n);
	nhapmatran(a,n);
	xuatmatran(a,n);
}
