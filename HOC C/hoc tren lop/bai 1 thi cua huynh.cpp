#include <stdio.h>
#include <conio.h>
#define MAX 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapsl(int &n)
{
	do
	{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n);
		if(n<=0 || n>MAX)
		{
			printf("Nhap sai, nhap lai!\n");
		}
	}
	while(n<=0 || n>MAX);
	printf("\n");
}
void nhapmang(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
}
void xuatmang(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int soduongcuoi(int a[],int n)
{
	for(int i=n-1; i>=0; i--)
	{
		if(a[i] > 0)
		{
			return i;
		}
	}
	return -1;
}
int timmin(int a[],int n)
{
	int min=a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i] < min)
		{
			min=a[i];
		}
	}
	return min;
}
int demmin(int a[],int n)
{
	int dem=0;
	int min=timmin(a,n);
	for(int i=0; i<n; i++)
	{
		if(a[i] == min)
		{
			dem++;
		}
	}
	return dem;
}
void chen1phantu(int a[],int &n,int &vitri,int &giatri)
{
	for(int i=n; vitri+1<i; i--)
	{
		a[i]=a[i-1];
	}
	a[vitri+1]=giatri;
	n++;	
}
int main(int argc, char** argv) {
	int a[MAX],n;
	nhapsl(n);
	nhapmang(a,n);
	printf("Mang vua duoc nhap la:\n");
	xuatmang(a,n);
	if(soduongcuoi(a,n) == -1)
	{
		printf("Khong co so duong trong mang!\n");
	}
	else
	{
		printf("Vi tri so duong cuoi cung (theo i) la: %d\n",soduongcuoi(a,n));
	}
	printf("So phan tu nho nhat: %d\n",demmin(a,n));
	int vitri,giatri;
	printf("Nhap vi tri can chen: ");
	scanf("%d",&vitri);
	printf("Nhap gia tri can chen: ");
	scanf("%d",&giatri);
	chen1phantu(a,n,vitri,giatri);
	printf("Mang sau khi chen gia tri %d vao vi tri %d la:\n",giatri,vitri);
	xuatmang(a,n);
	getch();
	return 0;
}
