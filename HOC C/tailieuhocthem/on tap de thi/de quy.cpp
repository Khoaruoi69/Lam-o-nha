#include<conio.h>
#include<stdio.h>
void nhapn (int &n){
	printf("nhap n: "); scanf("%d",&n);
}
void nhapmangdequy(int a[],int n){
	if(n==0) return ;
	if(n>0){
		nhapmangdequy(a,n-1);
		printf("\n\tnhap a[%d]",n-1);
		scanf("%d",&a[n-1]);
	}
}
void xuatmang(int a[],int n){
	if(n>0){
		xuatmang(a,n-1);
		printf("%d\t",a[n-1]);
	}
}
int main(){
	int n,a[100];
	nhapn(n);
	nhapmangdequy(a,n);
	printf("mang da nhap la: ");
	xuatmang(a,n);
}
