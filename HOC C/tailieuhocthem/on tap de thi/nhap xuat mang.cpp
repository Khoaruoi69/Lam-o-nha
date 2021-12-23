#include<stdio.h>
#include<conio.h>
void nhapn(int &n){
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
	printf("nhap a[%d]",i);
	scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
int main(){
	int n,a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
}
