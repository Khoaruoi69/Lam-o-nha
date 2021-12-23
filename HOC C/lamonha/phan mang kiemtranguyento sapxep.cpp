#include<stdio.h>
#include<conio.h>
void nhapn (int &n)
{
	do{
		printf("nhap so phan tu:"); scanf("%d",&n);
		if(n<0||n>100)
		printf("nhap sai nhap lai:");
    }while(n<0||n>100);
}
void nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang (int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d \t", a[i]);
	}
}    
int kiemtranguyento (int n){
			if(n<2) return 0;
			if(n==2) return 1;
			if(n%2==0) return 0;
			else{
				for(int i=2;i<n;i++){
					if(n%i==0){
						return 0;
					}
					return 1;}
					
				}
			}
void xuatnguyento (int a[],int n){
	int flag=1;
	for(int i=2;i<n;i++){
		if( kiemtranguyento(a[i])==1 ){
			printf("%4d",a[i]);
			flag=1;
		}
	}
	if(flag==0){
		printf("mang ko co nguyen to");
	}
	
}

int main(){
	int a[100],n;
	nhapn(n);
	nhapmang(a,n);printf("\n mang vua nhap ");
	xuatmang(a,n); printf("\n so nguyen to:");
	xuatnguyento(a,n);
	return 0;
}











