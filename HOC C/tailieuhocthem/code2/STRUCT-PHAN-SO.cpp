#include <stdio.h>
#include <memory.h>

struct PS
{
	int tu;
	int mau;
};
	
void Enter(PS &x)
{
	printf("\tNhap tu so: ");
	scanf("%d",&x.tu);
	printf("\tNhap mau so: ");
	scanf("%d",&x.mau);
}

void Read(PS a[],int n)
{
	for (int i=0;i<n;i++)
	{
		Enter(a[i]);
		printf("-----\n");
	}
}

void Output(PS x)
{
	printf("%d/%d",x.tu,x.mau);
}

void Display(PS a[],int n)
{
	for (int i=0;i<n;i++)
	{
		Output(a[i]);
		printf("\t");
	}
}

int UCLN(int a,int b)
{
	while (b>0)
	{
		a=a%b;
		int tmp=a; a=b; b=tmp;
	}
	return a;
}

PS Rutgon(PS &x)
{
	int tmp=UCLN(x.tu,x.mau);
	x.tu=x.tu/tmp;
	x.mau=x.mau/tmp;
}

PS Cong(PS a,PS b)
{
	PS c;
	c.tu=a.tu*b.mau+a.mau*b.tu;
	c.mau=a.mau*b.mau;
	Rutgon(c);
	return c;
}

void Find(PS a[],int n)
{
	float b[100];
	memset(b,0,sizeof(b));
	for (int i=0;i<n;i++) b[i]=(float)a[i].tu/a[i].mau;
	float u=b[0],v=b[0]; int uu=0,vv=0;
	for (int i=1;i<n;i++)
	{
		if (b[i]>u)
		{
			u=b[i];
			uu=i;
		}
		if (b[i]<v)
		{
			v=b[i];
			vv=i;
		}
	}
	printf("\nPhan so lon nhat: ");
	Output(a[uu]);
	printf("\nPhan so nho nhat: ");
	Output(a[vv]);
}

int CountMax(PS a[],int n)
{
	float b[100];
	memset(b,0,sizeof(b));
	for (int i=0;i<n;i++) b[i]=(float)a[i].tu/a[i].mau;
	float tmp=b[0]; int res=0;
	for (int i=1;i<n;i++)
		if (b[i]>tmp) tmp=b[i];
	for (int i=0;i<n;i++)
		if (b[i]==tmp) res++;
	return res;
}

int main()
{
	fflush(stdin);
	PS a[100]; int n;
	printf("Nhap so luong phan so: ");
	scanf("%d",&n);
	Read(a,n);
	printf("Day phan so vua nhap:\n");
	Display(a,n);
	PS res;
	res.tu=a[0].tu; res.mau=a[0].mau;
	for (int i=1;i<n;i++) res=Cong(res,a[i]);
	printf("\nTong cac phan so: ");
	Output(res);
	Find(a,n);
	printf("\nSo phan tu lon nhat la: %d",CountMax(a,n));
	return 0;
}
