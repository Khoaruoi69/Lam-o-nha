#include<stdio.h>
#include<conio.h>
void nhapn(int & n){
	printf("nhap n: "); scanf("%d",&n);
}
void nhapmang(int a[],int n){
	if(n==0) return;
	if(n>0){
		nhapmang(a,n-1);
		printf("\nnhap a[%d]",n-1);
		scanf("%4d",&a[n-1]);
	}
}
void xuatmang(int a[],int n){
	if(n>0){
		xuatmang(a,n-1);
		printf("%4d\t",a[n-1]);
		
	}
}
int main(){
	int n;
	int a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
}
