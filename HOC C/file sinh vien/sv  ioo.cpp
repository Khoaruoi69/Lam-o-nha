#include<stdio.h>
#include<conio.h>
void nhapsv(int &n){
	printf("nhap so luong sinh vien: ");
	scanf("%d",&n);
}

struct sinhvien {
	char hovaten[50];
	char mssv[10];
	int namsinh;
	char gioitinh;
	float DTB;
};
typedef struct sinhvien sv;

void nhap1sv(sv &a){
	fflush(stdin);
	printf("\nnhap ho va ten: "); gets(a.hovaten);
    fflush(stdin);
	printf("\nnhap MSSV: "); gets(a.mssv);
	fflush(stdin);
	printf("\nnhap nam sinh: "); scanf("%d",&a.namsinh);
	fflush(stdin);
	printf("\nnhap gioi tinh (nam Y/ nu X): "); scanf("%c",&a.gioitinh);
	fflush(stdin);
	printf("\nnhap DTB: "); scanf("%f",&a.DTB);
}
void nhapdssv(sv s[],int n){
	for(int i=1;i<=n;i++){
		printf("\n nhap sinh vien thu %d: ", i);
		nhap1sv(s[i]);
	}
}
void xuat1sv(sv a){
	printf("Ho va ten: "); puts(a.hovaten);
	printf("MSSV: "); puts(a.mssv);
	printf("Nam sinh: %d",a.namsinh);
	if(a.gioitinh=='Y'){
		printf("gioi tinh Nam");
	}
	if(a.gioitinh=='X'){
		printf("gioi tinh Nu");
	}
	printf("Diem trung binh: %f",a.DTB);
}
void xuatdssv(sv s[],int n){
	printf("\nDanh sach sinh vien:");
	for(int i=1;i<=n;i++){
		printf("\n sinh vien thu %d : ",i);
		xuat1sv(s[i]);
	}
}
int main(){
	int n;
	sv s[100];
	nhapsv(n);
	nhapdssv(s,n);
	xuatdssv(s,n);
	return 0;
	
}
























