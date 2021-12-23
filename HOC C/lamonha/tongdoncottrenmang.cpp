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

void TongDong(int a[][100],int d,int c)
{
 int l;
 long k;
 for(int i=0;i<=d;i++)    {
 long s=0;
     for(int j=0;j<=c;j++){
      s=s+a[i][j];
      if(s>k){
      	 k=s;
      	 l=i;
      }
	  }
   } printf("\ndong %d co tong lon nhat la %ld",l,k);
}
void dinhmatran(int a[][100],int d, int c)
{
	int flag=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j+1]&&
			a[i][j]>a[i+1][j-1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i+1][j+1]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1]){
				printf("\n%d la dinh",a[i][j]);
				flag=1;
			}
		}
	}
	if(flag==0){
		printf("\nkhong co dinh nao");
	}
}
int main(){
	int a[100][100],d,c;
	nhaphangvacot(c,d);
	nhapmatran(a,c,d);
	xuatmatran(a,c,d);
	TongDong(a,d,c);
}





























