#include<stdio.h>
#include<conio.h>
void nhapn(int &n){
	printf("nhap so sinh vien: "); scanf("%d",&n);
}
struct sinhvien{
	char hovaten[30];
	char mssv[10];
	int namsinh;
	char lop[10];
	char gioitinh;
	float DTB;
};
typedef struct sinhvien sv;
 
void nhap1sv(sv& a){
	fflush(stdin);
	printf("\nnhap Ho ten: "); gets(a.hovaten);
	printf("\nnhap mssv: "); gets(a.mssv);
	fflush(stdin);
	printf("\nnhap nam sinh: "); scanf("%d",&a.namsinh);
	fflush(stdin);
	printf("\nnhap lop: "); gets(a.lop);
	fflush(stdin);
	printf("\nnhap gioi tinh(nam Y/ nu X): "); scanf("%c",&a.gioitinh);
	fflush(stdin);
	printf("\nnhap diem trong binh: "); scanf("%f",&a.DTB);
		printf("\n--------------------------");
}
void nhapdssv(sv s[],int n){
	for(int i=0;i<n;i++){
		printf("\n nhap danh sach sinh vien thu: %d",i);
		nhap1sv(s[i]);
	
	}
}
void xuat1sv(sv a){
	printf("\nHo va ten sinh vien: "); puts(a.hovaten);
	printf("\nma so sinh vien: "); puts(a.mssv);
	printf("\nNam sinh: %d",a.namsinh);
	printf("\nLop: "); puts(a.lop);
	if(a.gioitinh=='y'){
		printf("\nGioi tinh: Nam");
	}
	if(a.gioitinh=='X'){
		printf("Gioi tinh: Nu");
	}
	printf("\nDiem trung binh: %f",a.DTB);
	printf("\n--------------------------");
}
void xuatdssv(sv s[],int n){
	printf("*********** Thong tin sinh vien***********");
	for(int i=0;i<n;i++){
		printf("\nsinh vien thu %d la:",i);
		xuat1sv(s[i]);
		printf("\n--------------------------");
	}
}
int main(){
	int n;
	sv s[100];
	nhapn(n);
	nhapdssv(s,n);
	xuatdssv(s,n);
	return 0;
	
}







