#include<stdio.h>
#include<conio.h>
void nhapsodongvacot(int &d,int &c){
	do{
	printf("nhap so dong: "); 
	scanf("%d",&d);
	if(d<0){
		printf("nhap sai nhap lai: ");
	}
	}while(d<0);
	do{
	printf("nhap so cot: ");
	scanf("%d",&c);
	if(c<0){
		printf("nhap sai nhap lai");
	}
	}while(c<0);
}
void nhapmatran(int a[][100],int d,int c){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("nhap a[%d][%d]",i,j);
			scanf("%4d",&a[i][j]);
		}
	}
}
void xuatmatran(int a[][100],int d,int c){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}
int main(){
	int d,c;
	int a[100][100];
	nhapsodongvacot(d,c);
	nhapmatran(a,d,c);
	xuatmatran(a,d,c);
	
	
	
}
