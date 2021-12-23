#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"

struct sinhvien
{
	char masv[10];
	char hoten[30];
	int namsinh;
	float dtb;
};

void nhap1sv(sinhvien &a)
{
	printf("\nNhap ma sv: ");
	fflush(stdin);
	gets(a.masv);
	printf("\nNhap ho ten sv: ");
	fflush(stdin);
	gets(a.hoten);
	printf("\nNhap nam sinh: ");
	scanf("%d",&a.namsinh);
	printf("\nnhap diem trung binh: ");
	float d;
	scanf("%f",&d);
	a.dtb=d;
}

void nhapmangsv(sinhvien sv[], int &n)
{
	printf("\nNhap so luong sv: ");
	scanf("%d", &n);
	for(int i=0; i<n;i++)
	{
		printf("\nNhap sv thu %d", i);
		nhap1sv(sv[i]);
	}
}

void xuat1sv(sinhvien a)
{
	printf("\nMa sv: ");
	puts(a.masv);
	printf("\nHo ten: ");
	puts(a.hoten);
	printf("\nNam sinh %d",a.namsinh);
	printf("\nDiem trung binh %.1f",a.dtb);
}

void xuatmangsv(sinhvien sv[], int n)
{
	printf("\nThong tin sv da nhap:");
	for(int i=0; i<n; i++)
	{
		printf("\nSV thu %d la: ", i);
		xuat1sv(sv[i]);
		printf("\n---------------");
	}
}

int main()
{
	sinhvien sv[20];
	int n;
	nhapmangsv(sv, n);
	xuatmangsv(sv,n);
	return 0;
}
