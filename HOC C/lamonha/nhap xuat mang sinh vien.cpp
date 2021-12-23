#include<conio.h>
#include<stdio.h>
struct nhapsinhvien{
	char hovaten[30];
	char mssv[10];
	char lop[10];
	char gioitinh;
	int namsinh;
	float DTB;
  
};
typedef struct nhapsinhvien NSV;
void nhap1sv(NSV&a){
	fflush(stdin);
	printf("\nnhap ho va ten sv:"); gets(a.hovaten);
	printf("\nnhap ma so sinh vien:"); gets(a.mssv);
	printf("\nnhap lop:"); scanf("%s",&a.lop);
	fflush(stdin);
	do{
	print("\n nhap gioi tinh (nam Y/ nu X):");
	a.gioitinh=getche();
	if(a.gioitinh!='X'&&a.gioitinh!='Y'){
		printf("\nnhap sai");
	}
	}while(a.gioitinh!='X'&&a.gioitinh!='Y');
	
	fflush(stdin);
	printf("\nnhap nam sinh:"); scanf("%d",&a.namsinh);
/*	printf("\nnhap nhap diem trung binh:");*/
	float t;
	printf("nhap diem ly:"); scanf("%f",&t); a.ly=t;
	printf("nhap diem toan:"); scanf("%f",&t); a.toan=t;
	printf("nhap diem tin:"); scanf("%f",&t); a.tin=t;
	a.DTB=(a.ly+a.toan+a.tin)/3;
}
void nhapmangsv(NSV sv[],int a){
	printf("\n nhap so luong sinh vien:");
	scand("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap sv thu %d:",i);
		nhap1sv(sv[i]);
	}
}
void xuat1sv(NSV&a){
	printf("ho va ten sv:"); puts(a.hovaten);
	printf("ma so sinh vien:"); puts(a.mssv);
	printf("lop:%s",a.lop);
	printf("nam sinh",a.namsinh);
	printf("gioi tinh:"); puts(a.gioitinh);
}



































