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
// ok ok
int timmax(int a[][100],int d,int c){
	int max=0; 
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}	
	}
	return max;
}
// ra ra
long tinhtong(int a[][100],int d,int c){
	long s=0;
	for(int i=0;i<=d;i++){
		for(int j=0;j<=c;j++){
			s=s+a[i][j];
		}	
	}
	return s;
}
long tongcheochinh(int a[][100],int d,int c){
	long t=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(i==j){
				t=t+a[i][j];
			}
		}
	}
		return t;
}
// utf
long tttmd(int a[][100],int d,int c){
	int i;
	long o=0;
	printf("\nmoi ban nhap dong muon tinh:");
	scanf("%d",&i);
		for(int j=0;j<=c;j++){
			o=o+a[i][j];
			
		}
	return o;
}
// ok ok
void TongDonglonnhat(int a[][100],int d,int c)
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
		printf("khong co dinh nao");
	}
}






















int main(){
	int d,c,i;
	int a[100][100];
	nhaphangvacot(c,d);
	nhapmatran(a,c,d);
	xuatmatran(a,c,d);
	int max=timmax(a,c,d); printf("\nso lon nhat trong mang la: %d",max);
	long s=tinhtong(a,d,c); printf("\ntong cac so trong mang: %ld",s);
	long t=tongcheochinh(a,d,c); printf("\ntong cheo chinh la: %ld",t);
	long o=tttmd(a,d,c); printf("\ntong tren dong muon tinh la: %ld",o);
	TongDonglonnhat(a,d,c);
	dinhmatran(a,d,c);
	return 0;
}
