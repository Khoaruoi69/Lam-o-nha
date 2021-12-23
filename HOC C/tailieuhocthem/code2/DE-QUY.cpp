#include <stdio.h>

void NhapN(int &n)
{
	do
	{
		printf("Nhap n = ");
		scanf("%d",&n);
		if (n<=0) printf("Nhap sai. Moi nhap lai.\n");
	}
	while (n<=0);
}

void NhapMang(int a[],int n)
{
	if (n>0)
	{
		NhapMang(a,n-1);
		printf("\tNhap a[%d] = ",n-1);
		scanf("%d",&a[n-1]);
	}
}

void XuatMang(int a[],int n)
{
	if (n>0)
	{
		XuatMang(a,n-1);
		printf("%d\t",a[n-1]);
	}
}

long TongMang(int a[],int n)
{
	if (n==0) return 0;
	long s = TongMang(a,n-1);
	return s = s + a[n-1];
}

long TongChan(int a[],int n)
{
	if (n==0) return 0;
	if (a[n-1]%2==0) return a[n-1]+TongChan(a,n-1);
	return TongChan(a,n-1);
}

int DemDuong(int a[],int n)
{
	int dem;
	if(n==0) return 0;
	dem=DemDuong(a,n-1);
	if(a[n-1] > 0) dem++;
	return dem;
}

int DemAm(int a[],int n)
{
	int dem;
	if(n==0) return 0;
	dem=DemAm(a,n-1);
	if(a[n-1] < 0) dem++;
	return dem;
}

int PTLonNhat(int a[],int n)
{
	if(n==0) return a[0];
	int t=PTLonNhat(a,n-1);
	if(t<a[n-1]) t=a[n-1];
	return t;
}

int PTNhoNhat(int a[],int n)
{
	if(n==0) return a[0];
	int t=PTNhoNhat(a,n-1);
	if(t>a[n-1]) t=a[n-1];
	return t;
}

int ChanCuoi(int a[],int n)
{
	if(n == 0) return 0;
	if(a[n-1]%2 == 0) return a[n-1];
	ChanCuoi(a,n-1);
}

int ViTri(int a[],int n,int x)
{
	if (n==0) return -1;
	if (a[n-1] == x) return n-1;
	ViTri(a,n-1,x);
}

int main()
{
	int a[100],n;
	NhapN(n);
	NhapMang(a,n);
	printf("Mang ban vua nhap la:\n");
	XuatMang(a,n);
	printf("\nTong cac phan tu cua mang: %d\n",TongMang(a,n));
	printf("Tong cac phan tu chan cua mang: %d\n",TongChan(a,n));
	printf("So phan tu am la: %d\n",DemAm(a,n));
	printf("So phan tu duong la: %d\n",DemDuong(a,n));
	printf("Phan tu lon nhat la: %d\n",PTLonNhat(a,n));
	printf("Phan tu nho nhat la: %d\n",PTNhoNhat(a,n));
	printf("Phan tu chan cuoi la: %d\n",ChanCuoi(a,n));
	int x;
	printf("Moi nhap gia tri can tim: ");
	scanf("%d",&x);
	if (ViTri(a,n,x)==-1) printf("Khong tim thay.");
	else printf("Tim thay tai vi tri: %d",ViTri(a,n,x));
	return 0;
}
