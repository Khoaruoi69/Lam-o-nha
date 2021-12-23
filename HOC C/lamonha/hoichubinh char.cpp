#include<stdio.h>
#include<conio.h>
#include<math.h>

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
int KiemTraNguyenTo(int a[],int n){
   for(int i = 2; i<= sqrt(n) ; i++)
   if(n%i==0)
      return 0;
   return 1;
}
void LietKeNguyenTo(int a[], int n) {
   for(int i = 0; i<n ; i++)
   if(KiemTraNguyenTo(a[i]))
      printf("%d\t",a[i]);
}
int main (){
		int n;
	nhapn(n);
	int a[n];
	nhapmang(a,n);  printf("\n mang vua nhap");
	xuatmang(a,n);
	KiemTraNguyenTo(a,n);
	LietKeNguyenTo(a,n);
}
