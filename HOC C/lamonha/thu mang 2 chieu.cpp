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
void tinhtong(int a[][100],int d,int c){
	int s=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			s=s+a[i][j];
		}
	printf("tong la: %d",s);
	}
}

long tongcheochinh(int a[][100],int d,int c){
	long t=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(i==j){
				t=t+a[i][j];
			}
		}
		return t;
	}
}
long tttmd(int a[][100],int d,int c){
	int dong;
	int o=0;
	printf("\nmoi ban nhap dong muon tinh");
	scanf("%d",&dong);
	for(int i=dong;;){
		for(int j=0;j<=c;j++){
			o=o+a[i][j];
		}
		return 0;
	}
}


int main(){
	int d,c;
	int a[100][100];
	nhaphangvacot(c,d);
	nhapmatran(a,c,d);
	xuatmatran(a,c,d);
	tinhtong(a,d,c);
/*	int max=timmax(a,c,d); printf("so lon nhat trong mang la: %d",max);
	long s=tinhtong(a,d,c); printf("tong cac so trong mang: %ld",s);*/
	long t=tongcheochinh(a,d,c); printf("\ntong cheo chinh la: %ld",t);
	long o=tttmd(a,d,c); printf("\ntong tren dong %d la: %ld",o);
	return 0;
}




















