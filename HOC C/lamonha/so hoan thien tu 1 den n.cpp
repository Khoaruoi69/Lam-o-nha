#include<stdio.h>
#include<conio.h>
void nhapn (int&n){
	do {
		printf("nhap n:"); scanf("%d",&n);
		if(n<0||n>100){
			printf("nhap sai nhap lai");
		}
	}while(n<0||n>100);
}
int ktht(int n){
	int S=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			S=S+i;
		}
	}
		if(S==n){
			return 1;
		}
		return 0;
}

void soht (int n)
{
		if(ktht(n)==1){
			printf("\n%d la so hoan thien",n);	
		}
		else{
			printf("\n%d ko la so hoan thien",n);
		}
}
	
int sohoanthien(int n){
	for(int i=1;i<n;i++){
		if(ktht(i)==1){
			printf("\t%5d",i);
		}
	}
}

void nhapdaysonguyen(int n, int a[]){
	for(int i=0;i<=n;i++){
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuatday(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}

void sole(int a[],int n){
	for(int i=1;i<=n;i++){
		if(a[i]%2!=0){
			printf("\t%5d",a[i]);
		}
	}
}






int main(){
	int n,i;
	int a[100];
	nhapn(n);
	soht(n);
	printf("\nso nguyen to tu 1 den %d la:",n);
	sohoanthien(n);
	nhapdaysonguyen(n,a);
	xuatday(a,n);
	printf("\nso le :");
	sole(a,n);
	
}

