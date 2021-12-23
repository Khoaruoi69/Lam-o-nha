#include<stdio.h>
#include<conio.h>

void nhapn (int&n)
{
	do {
		printf("nhap vao so phan tu n:");
		scanf("%d",&n);
	if(n<=0||n>100){
		printf("\n ban nhap sai nhap lai");}
	} while(n<=0||n>100);
}
void nhapmang(int a[],int n)
{
	for(int i =0;i<n;i++){
		printf("nhap a[%d]=",i);
		scanf("%d", &a[i]);}	
}
void xuatmang (int a[], int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
	void sosanh (int a[],int n){
		int l,k,d,p;
	printf("nhap l,k;"); scanf("%d%d",&l,&k);
	for(int i=0;i<n;i++){
		if( l > a[i])
		{
			k=l-a[i]; d++;
		}
		else{
			p=a[i]-l; d++;
		}
	}printf("%d",d);
	}
	
	
int main(){
	int n,d;
	int a[100];
    
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	
}
