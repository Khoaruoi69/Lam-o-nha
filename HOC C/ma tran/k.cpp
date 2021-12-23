#include<stdio.h>

void nhapn(int n){
	printf("nhap n: "); 
scanf("%d",&n);
}

void nhapmang(int a[], int n){
	int i=0;
	while(i<n){
		printf("\nnhap a[%d]",i);
	//	scanf("%d",&a[i]);
		i++;
	}
}
void xuatmang(int a[], int n){
	int i=0;
    while(i<n){
		printf("\n%d",a[i]);
		i++;
	}
}
int main(){
	int n,a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	return 0;
}
