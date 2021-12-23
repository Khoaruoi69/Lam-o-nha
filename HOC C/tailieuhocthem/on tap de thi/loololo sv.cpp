#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
	printf("nhap so luong sinh vien: "); scanf("%d",&n);
}
struct sinhvien{
	char hovaten[30];
	char mssv[10];
	char lop[10];
	int namsinh;
	char gioitinh;
};
typedef struct sinhvien sv;
void nhap1sv (sv & a){
	fflush(stdin);
	printf("\nnhap ho va ten: "); gets(a.hovaten);
	fflush(stdin);
	printf("\nnhap mssv: "); gets(a.mssv);
	fflush(stdin);
	printf("\nnhap lop: "); scanf("%d",&a.lop);
	fflush(stdin);
	printf("\nnhap nam sinh: "); scanf("%d",&a.namsinh);
	fflush(stdin);
	printf("\nnhap gioi tinh(nam Y/nu X)");
	printf("\n----------------");
}
void danhsachsv(sv s[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap sinh vien thu %d: ",i);
	    nhap1sv(s[i]);
	}
}
void xuat1sv(sv& a){
	printf("\nHo va ten: "); puts(a.hovaten);
	printf("\nMSSV: "); puts(a.mssv);
	printf("\nLop: "); puts(a.lop);
	printf("\nNam sinh: %d",a.namsinh);
	if(a.gioitinh=='Y'){
		printf("\nGioi tinh: Nam");
	}
	if(a.gioitinh=='X'){
		printf("\nGioi tinh: Nu");
	}
}
void xuatdssv(sv s[],int n){
	printf("*******thong tin sinh vien********");
	for(int i=0;i<n;i++){
		printf("\nsinh vien thu %d la:",i);
		xuat1sv(s[i]);
		printf("\n--------------------");
	}
}
int main (){
	int n,a;
	sv s[100];
	nhapn(n);
    danhsachsv(s,n);
    xuatdssv(s,n);
}
















