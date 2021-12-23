#include<stdio.h>
#include<conio.h>
void nhapn (int&n)
{ 
do { 
	printf("nhap so phan tu n:"); scanf("%d",&n);
	if(n<=0){
		printf("ban nhap sai");
	}
}while (n<=0);
}
//void nhapmang(int a[],int n){
//	for(int i=0;i<n;i++){
//		printf("\nNhap a[%d]=",i);
//		scanf("%d",&a[i]);
//	}
//}
//void xuatmang(int a[],int n){
//	for(int i=0; i<n;i++){
//	   printf("%4d",a[i]);
//    }  
//}  
//int ktht(int n){
//	int S=0;
//	for(int i=1;i<n;i++){
//		if(n%i==0){
//			S=S+i;
//		}
//	}
//		if(S==n){
//			return 1;
//		}
//		return 0;
//}
//int p;
//int sole(int n){
//	int k=0;
//	for(int i =100;i<n;i++){
//		if(i%3==0){
//			printf("\t%d", i);
//		}
//		p++;
//	}
//}
int p;
void solela(int a[],int n){
	printf("\nSo chia het cho 3:  ");
	for(int i=100;i<n;i++){
		if(i%3==0){
			printf("%4d",i);
				p++;
		}
	
	}
	printf("\ntong so la: %d",p);
}
//void xuatsoht(int a[],int n)
//{
//	int flag=0;
//	printf("\nso hoan thien trong mang tu 0 den %d la:",n);
//	for (int i=0;i<n;i++){
//		if(ktht(a[i])==1){
//			printf("%4d",a[i]);
//			flag=1;
//		}
//		}	
//	if(flag==0){
//		printf("/n mang khong co so hoan thien");	
//		
//	}
//}
int main()
{
	int n;
	int a[n];
	nhapn(n);
	solela(a,n);
//	
//	nhapmang(a,n);
//	
//	xuatmang(a,n);
//	
//	xuatsoht(a,n);
//	return 0;
}
