#include<stdio.h>
#include<conio.h>
void nhaphangvacot (int&d,int&c){
	do {
		printf("nhap vao so cot:"); scanf("%d",&c);
		if(c<0||c>100){
			printf("nhap sai ban nhap lai so dong");
		}
	}while(c<0||c>100);
	do {
		printf("nhap vao so dong:"); scanf("%d",&d);
		if(d<0||d>100){
			printf("nhap sai ban nhap sai so cot");
		}
	}while(d<0||d>100);	
}
void nhapmatran(int a[][100],int d,int c){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("nhap a[%d][%d]",i,j);
			scanf("%4d",&a[i][j]);
		}
	}
}
void xuatmatran (int a[][100],int d,int c){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}
	
void tttmd(int a[][100],int d,int c){
	int k,i;
	long T=0;
	printf("\nmoi ban nhap dong muon tinh:");
	scanf("%d",&k);
	for(int i=0;i<d;i){
		for(int j=0;j<c;j++){
			T=T+a[i][j];
		}
	}
	printf("\ntong tren dong %d la: %ld",i,T);
}















int main(){
	int d,c;
	int a[100][100];
	nhaphangvacot(c,d);
	nhapmatran(a,c,d);
	xuatmatran(a,c,d);
	/*int max=timmax(a,c,d); printf("\nso lon nhat trong mang la: %d",max);
	long s=tinhtong(a,d,c); printf("\ntong cac so trong mang: %ld",s);
	long t=tongcheochinh(a,d,c); printf("\ntong cheo chinh la: %ld",t);
	/*long o=tttmd(a,d,c); printf("\ntong tren dong %d la: %ld",o);*/
	tttmd(a,c,d);
	return 0;
}















