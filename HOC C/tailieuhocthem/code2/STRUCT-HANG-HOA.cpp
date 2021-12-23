#include <stdio.h>
#include <stdlib.h>

struct hanghoa
{
	char mahang[10];
	char tenhang[30];
	int soluong;
	float dongia;
};

typedef struct hanghoa HH;

void NhapN(int &n)
{
	do
	{
		printf("Nhap so luong hang hoa: ");
		scanf("%d",&n);
		if (n < 1 || n > 100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (n < 1 || n > 100);
}

void Nhap1HH(HH &a)
{
	printf("- Nhap ma hang: ");
	fflush(stdin);
	gets(a.mahang);
	printf("- Nhap ten hang: ");
	fflush(stdin);
	gets(a.tenhang);
	printf("- Nhap so luong: ");
	scanf("%d",&a.soluong);
	float tmp;
	printf("- Nhap don gia: ");
	scanf("%f",&tmp);
	a.dongia=tmp;
}

void NhapHH(HH a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Moi ban nhap thong tin cua hang hoa thu %d:\n",i);
		Nhap1HH(a[i]);
		printf("-----------------\n");
	}
}

void Xuat1HH(HH a)
{
	printf("- Ma hang: ");
	puts(a.mahang);
	printf("- Ten hang: ");
	puts(a.tenhang);
	printf("- So luong: %d\n",a.soluong);
	printf("- Don gia: %.2f\n",a.dongia);
	printf("- Thanh tien: %.2f\n",a.soluong*a.dongia);
}

void XuatHH(HH a[],int n)
{
	printf("Danh sach hang hoa:\n");
	for (int i=0;i<n;i++)
	{
		Xuat1HH(a[i]);
		printf("-----------------\n");
	}
}

int TongSLHH(HH a[],int n)
{
	if (n==0) return 0;
	int s=TongSLHH(a,n-1);
	s=s+a[n-1].soluong;
	return s;
}

int main()
{
	HH a[100];
	int n;
	NhapN(n);
	NhapHH(a,n);
	XuatHH(a,n);
	printf("Tong so luong hang hoa: %d",TongSLHH(a,n));
	return 0;
}

