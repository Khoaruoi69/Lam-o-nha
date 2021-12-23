#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapn (int&n){
	printf("nhap n:"); 
	scanf("%d",&n);
}
int ucln (int a,int b){
	if(a==0||b==0) {
		return a+b;
	}
	while (a !=b){
	if(a>b){
		a=a-b;
	}
	else{
		b=b-a;
	}
}
	return a;
}
void hoanvi(int a , int b){
	printf("\n ban dau : %d %d",a,b);
	int tam;
		tam =a;
		a=b;
		b=tam;
	printf("\n hoan vi : %d %d ",a,b);
}

void nhapmang (int c[50],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap c[%d]=",i);
		scanf("%d",&c[i]);
	}
}
void xuatmang(int c[50],int n){
	printf("\nmang vua nhap:");
		for(int i=0;i<n;i++){
		printf(" %4d",c[i]);
	}
}
void hoanvid(int c[],int n){
	printf("\nhoan vi:");
	for(int i=n; i>=0; i--){
		printf("%4d", c[i]);
	}
}










int main (){
	int n,t;
	int a,b;
	int c[50];
	nhapn(n);
	printf("n=%d",n);
	printf("\nnhap a:"); scanf("%d",&a);
	printf("\nnhap b:"); scanf("%d",&b);
    int l=ucln(a,b); printf(" \nUCLN: %d",l);
	hoanvi(a,b);
	nhapmang(c,n);
	xuatmang(c,n);
	hoanvid(c,n);
	return 0;
}

