#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
	printf("nhap n: "); scanf("%d",&n);
}
// nhap mang theo for:
void nhapmang(int a[],int n){
	for(int i=0; i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%4d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
// nhap mang theo de quy:
void nhapm(int a[],int n){
	if(n==0) return;
	if(n>0){
		nhapm(a,n-1);
		printf("\nnhap a[%d]= ",n-1);
		scanf("%d",&a[n-1]);
	}
}
void xuatm(int a[],int n){
	if(n>0){
		xuatm(a,n-1);
		printf("%4d",a[n-1]);
	}
}
int timmax(int a[],int n){
	if(n==0) return a[0];
	if(n>0){
		int max=timmax(a,n-1);
		if(max<a[n-1]){
			return a[n-1]; 
		}
		return max;
	}
}
long tinhtong(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		long t=tinhtong(a,n-1);
		return t+a[n-1];
	}
}
int main(){
	int n;
	int a[100];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	nhapm(a,n);
	xuatm(a,n);
	int o=timmax(a,n);
	printf("\nso lon nhat trong mang de quy la: %d",o);
	long i=tinhtong(a,n-1);
	printf("\ntong mnag la: %ld",i);

}






