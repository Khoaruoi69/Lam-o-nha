#include<stdio.h>
#include<conio.h>
#include<math.h>
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
int ktschp(int&n){
	if (n > 3)
	{
		int a = sqrt((int)n);
		if (a*a == n){
			return 1;
		}
		return 0;
	}
}
void xoanoc(int a[][100],int d,int c){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
				printf("%4d",a[i][j]);
}
}
}
void songto(int a[][100],int d, int c){
	long s=0,t;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
		if(ktschp(a[i][j])==1){
			s=s+a[i][j];
			t++;
		}
	}
}
	printf("\n so chinh phuong la: %ld",s/t);
}
int main(){
	int d,c,a[100][100];
	nhaphangvacot(d,c);
	nhapmatran(a,d,c);
	xuatmatran(a,d,c);
	songto(a,d,c);
	xoanoc(a,d,c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
