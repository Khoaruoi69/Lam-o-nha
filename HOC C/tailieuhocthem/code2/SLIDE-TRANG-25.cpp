#include <stdio.h>

void NhapDong(int &d)
{
	do
	{
		printf("Moi ban nhap so dong: ");
		scanf("%d",&d);
		if (d<=0 || d>100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (d<=0 || d>100);
}

void NhapCot(int &c)
{
	do
	{
		printf("Moi ban nhap so cot: ");
		scanf("%d",&c);
		if (c<=0 || c>100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (c<=0 || c>100);
}

void NhapMaTran(int a[][100],int d,int c)
{
	for (int i=0;i<d;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("Moi ban nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void XuatMaTran(int a[][100],int d,int c)
{
	for (int i=0;i<d;i++)
	{
		for (int j=0;j<c;j++) printf("%d\t",a[i][j]);
		printf("\n");
	}
}

long TongPT(int a[][100],int d,int c)
{
	long t=0;
	for (int i=0;i<d;i++)
		for (int j=0;j<c;j++) t+=a[i][j];
	return t;
}

float TBC(int a[][100],int d,int c)
{
	long t=0; int dem=0;
	for (int i=0;i<d;i++)
		for (int j=0;j<c;j++) 
		{
			t+=a[i][j];
			dem++;
		}
	return (float)t/dem;
}

float TBCDuong(int a[][100],int d,int c)
{
	long t=0; int dem=0;
	for (int i=0;i<d;i++)
		for (int j=0;j<c;j++) 
			if (a[i][j] > 0)
			{
				t+=a[i][j];
				dem++;
			}
	return (float)t/dem;
}

// TBC cac phan tu am lam tuong tu nhe :v

void XuatPTDong(int a[][100],int k,int c)
{
	for (int j=0;j<c;j++)
		printf("%d\t",a[k][j]);
}

void XuatPTCot(int a[][100],int d,int k)
{
	for (int i=0;i<d;i++)
		printf("%d\t",a[i][k]);
}

int PTLonNhat(int a[][100],int d,int c)
{
	int _m=a[0][0];
	for (int i=0;i<d;i++)
		for (int j=0;j<c;j++)
			if (_m < a[i][j]) _m=a[i][j];
	return _m;
}

// Tim phan tu nho nhat lam tuong tu nhe :v

// chi ma tran vuong moi co duong cheo chinh, duong cheo phu
// ma tran vuong co: so dong = so cot
void CheoChinh(int a[][100],int d)
{
	for (int i=0;i<d;i++) printf("%d\t",a[i][i]);
}

void CheoPhu(int a[][100],int d)
{
	for (int i=0;i<d;i++)
		for (int j=0;j<d;j++)
			if (i + j == d-1) printf("%d\t",a[i][j]);
}

int main()
{
	int a[100][100],d,c;
	NhapDong(d);
	NhapCot(c);
	NhapMaTran(a,d,c);
	printf("Ma tran ban vua nhap la:\n");
	XuatMaTran(a,d,c);
	printf("Tong cac phan tu cua ma tran: %ld\n",TongPT(a,d,c));
	printf("TBC cac phan tu: %.1f\n",TBC(a,d,c));
	printf("TBC cac phan tu duong: %.1f\n",TBCDuong(a,d,c));
	int k;
	printf("Nhap dong can xuat: ");
	scanf("%d",&k);
	XuatPTDong(a,k,c);
	int kk;
	printf("\nNhap cot can xuat: ");
	scanf("%d",&kk);
	XuatPTCot(a,d,kk);
	printf("\nPhan tu lon nhat la: %d\n",PTLonNhat(a,d,c));
	CheoChinh(a,d);
	printf("\n");
	CheoPhu(a,d);
	return 0;
}
