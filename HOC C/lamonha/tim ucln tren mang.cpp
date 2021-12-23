#include<conio.h>
#include<stdio.h>
void nhapn(int&n){
	printf("nhap n:"); scanf("%d",&n);
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap a[%d]",i);
		scanf("%4d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	printf("mang vua nhap:");
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
void ucln(int a[],int n){
	int c,k,l,max=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i]%a[j]==0||a[j]%a[i]==0){
				printf("\n%d",a[j]);
				c=a[-i];
				if(max<a[-i]){
					max=a[-i];
					l=a[i]; k=a[-i];
				}
			}
		}
	}
	printf("\ntong uoc chung lon nhat:%d",k+l);
}
int main(){
	int n;
	int a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	ucln(a,n);
	
}
