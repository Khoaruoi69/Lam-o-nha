#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
	printf("nhap n: "); scanf("%d",&n);
}
void xuatsolientiep(int&n){
	for(int i=1;i<=n;i++){
		printf("%4d",i);
	}
}
void cacuoccuan(int &n){
	printf("\ncac uoc cua %d la: ",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%4d",i);
		}
	}
}
void cacphantuchan(int n){
	printf("\ncac phan tu chan tu 1 den %d la:",n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%4d",i);
		}
	}
}
int ktnt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
	}
		return 1;
}
int songuyentola(int n){
	printf("\ncac nguyen to tu 1 den %d la: ",n);
	for(int i=1;i<=n;i++){
		if( ktnt(i)==1){
			printf("%4d",i);
		}
	}
}
int ktht(int n){
	long s=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
		return 1;
	}
	return 0;

}
void kiemtraht(int n){
	printf("\ncac so hoan thien tu 1 den %d la: ",n);
	for(int i=1;i<=n;i++){
	if(ktht(i)==1){
		printf("%4d",i);
	}
}
}
void kyhhht(int n){
	if(ktht(n)==1){
		printf("\n%d la so hoan thien",n);
	}
	else{
		printf("\n%d ko la so hoan thien",n);
	}
}
// DE QUY
void nhapmang(int a[],int n){
	if(n==0) return;
	if(n>0){
		nhapmang(a,n-1);
		printf("\nnhap a[%d]: ",n-1);
		scanf("%4d",&a[n-1]);
	}
}
void xuatmang(int a[],int n){
	if(n>0){
		xuatmang(a,n-1);
			printf("\t %d",a[n-1]);
	}
}
void sochan(int a[],int n){
	printf("\ncac so chan la:");
	if(n>0){
		if(ktnt(a[n-1])==1){
			printf("\n%4d",a[n-1]);
		}
	}
}
long tongchan(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		long s=tongchan(a,n-1);
		if(a[n-1]%2==0){
			return s+a[n-1];
		}
		return s;
	}
}
int main(){
	int n;
	int a[100];
	nhapn(n);
	xuatsolientiep(n);
	cacuoccuan(n);
	cacphantuchan(n);
	songuyentola(n);
	kiemtraht(n);
	 kyhhht(n);
	nhapmang(a,n);
	printf("\nmang vau nhap la: ");
	xuatmang(a,n);
	long p=tongchan(a,n);
	printf("\ntong chan la: %ld",p);
	sochan(a,n);
	return 0;
}

