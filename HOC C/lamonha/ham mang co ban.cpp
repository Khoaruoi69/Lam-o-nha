#include<stdio.h>
#include<conio.h>
int main (){
	int n=5,i,s=0;
	int a[n];
	for (i=0;i<n;i++){
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
	// thuc hien in ra cac phan tu da nhap
	printf("\nmang da nhap\n");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	// tinh tong cac so mang
	for(i=0;i<n;i++){
		s=s+a[i];
	}
	printf("\n tong cac so mang %d\n",s);
	return 0;
}
