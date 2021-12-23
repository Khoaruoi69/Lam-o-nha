#include<conio.h>
#include<stdio.h>
#include<string.h>
struct kytu{
	char string[30];
};
typedef struct kytu kt;
void nhapn(int&n){
	printf("\nNhap n: "); 
	scanf("%d",&n);
}
void nhapkytu(kt &a){
	printf("\nEnter string: "); gets(a.string);
}
void nhapdanhsachkytu(kt s[],int n){
	for(int i=0;i<n;++i){
		printf("\nEnter string %d: ",i);
		nhapkytu(s[i]);
	}
}
void xuatkytu(kt a){
	 puts(a.string);
}
void xuatdanhsachkytu(kt s[], int n){
	printf("\n**********danh sach ky tu *********");
	for(int i=0;i<n;++i){
		xuatkytu(s[i]);
	}
}
int main(){
     kt s[100];
     kt a;
     int n;
     nhapn(n);
	nhapdanhsachkytu(s,n);
	xuatdanhsachkytu(s,n);
	return 0;
}
