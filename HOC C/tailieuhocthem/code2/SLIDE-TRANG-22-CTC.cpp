/* 	Xem de bai tai slide 22
	Bai nay minh code theo dang chuong trinh con nhe */
#include <stdio.h>

// ham nhap so phan tu cua mang
void NhapN(int &n)
{
	do
	{
		printf("Moi ban nhap so phan tu n = ");
		scanf("%d",&n);
		if (n<=0 || n>100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (n<=0 || n>100);
}

// ham nhap mang
void NhapMang(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Moi ban nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
}

// ham xuat mang
void XuatMang(int a[],int n)
{
	for (int i=0;i<n;i++) printf("%d\t",a[i]);
}

// xuat cac phan tu chia het cho 3
void ChiaHetCho3(int a[],int n)
{
	for (int i=0;i<n;i++)
		if (a[i]%3 == 0) printf("%d\t",a[i]);
}

// dem so luong cac phan tu duong
int DemPTDuong(int a[],int n)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if (a[i] > 0) dem++;
	return dem;
}

// tinh tong cac phan tu duong
int TongPTDuong(int a[],int n)
{
	int tong=0;
	for (int i=0;i<n;i++) tong+=a[i];
	return tong;
}

// tinh trung binh cong cac phan tu
float TBC(int a[],int n)
{
	int tong=0;
	for (int i=0;i<n;i++) tong+=a[i];
	return (float)tong/n;
}

// tinh trung binh cong cac phan tu duong
float TBCDuong(int a[],int n)
{
	int tong=0;
	int d=0;
	for (int i=0;i<n;i++) 
		if (a[i] > 0) 
		{
			tong+=a[i];
			d++;	
		}
	return (float)tong/d;
}

// tim phan tu duong dau tien
void DuongDau(int a[],int n)
{
	int danhdau=0;
	for (int i=0;i<n;i++)
		if (a[i] > 0)
		{
			printf("Phan tu duong dau tien la %d\n",a[i]);
			danhdau=1;
			return;
		}
	if (danhdau == 0) printf("Mang khong co phan tu duong\n");
}

// tim phan tu duong cuoi cung
void DuongCuoi(int a[],int n)
{
	int danhdau=0;
	for (int i=n-1;i>=0;i--)
		if (a[i] > 0)
		{
			printf("Phan tu duong cuoi cung la %d\n",a[i]);
			danhdau=1;
			return;
		}
	if (danhdau == 0) printf("Mang khong co phan tu duong\n");
}

// tim phan tu lon nhat
int PTLonNhat(int a[],int n)
{
	int m=a[0];
	for (int i=0;i<n;i++)
		if (m < a[i]) m=a[i];
	return m;
}

// tim phan tu nho nhat
int PTnhoNhat(int a[],int n)
{
	int m=a[0];
	for (int i=0;i<n;i++)
		if (m > a[i]) m=a[i];
	return m;
}

int main()
{
	int n, a[100];
	NhapN(n);
	NhapMang(a,n);
	printf("Mang ban vua nhap la: ");
	XuatMang(a,n);
	printf("\nCac phan tu chia het cho 3: ");
	ChiaHetCho3(a,n);
	printf("\nSo luong phan tu duong la %d",DemPTDuong(a,n));
	printf("\nTong cac phan tu duong la %d",TongPTDuong(a,n));
	printf("\nTBC cac phan tu la %.1f",TBC(a,n));
	printf("\nTBC cac phan tu duong la %.1f\n",TBCDuong(a,n));
	DuongDau(a,n);
	DuongCuoi(a,n);
	printf("Phan tu nho nhat la %d",PTnhoNhat(a,n));
	printf("\nPhan tu lon nhat la %d",PTLonNhat(a,n));
	return 0;
}
