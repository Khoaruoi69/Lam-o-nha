#include<stdio.h>
#include<conio.h>
int main(){
	int n,a[n];
	printf("nhap so phan tu n:"); scanf("%d",&n);
	// de nhap du lieu cho mang ta can nhap mot vong for
	for (int i=0;i<n;i++){
		printf("\nnhap a[%d]=",i);
		scanf("%d", &a[i]);
	}
	// xuat cac phan tu 
	for(int i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	return 0;
}
