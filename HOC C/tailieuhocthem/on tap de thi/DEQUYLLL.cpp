#include<stdio.h>
#include<stdio.h>
void nhapn(int&n){
	printf("nhap n: "); scanf("%d",&n);
}
void nhapmang(int a[],int n){
	if(n==0) return;
	if(n>0){
		nhapmang(a,n-1);
		printf("\n\t nhap a[%d]",n-1);
		scanf("%d",&a[n-1]);
	}
}
void xuatmang(int a[],int n){
	if(n>0){
		xuatmang(a,n-1);
		printf("%4d",a[n-1]);
	}
}
int tongmang(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		return tongmang(a,n-1)+a[n-1];
	}
}
int tongchan(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		int o=tongchan(a,n-1);
		if(a[n-1]%2==0){
		return o+a[n-1];
	}
		return o;
	}
}
int main(){
	int n,a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	int l=tongmang(a,n);
	printf("\ntong mang la: %d",l);
	int m=tongchan(a,n);
	printf("\ntong chan la: %d",m);
}
