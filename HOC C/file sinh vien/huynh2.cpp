#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
* Khai bao struct tagSach
*/
using namespace std;
typedef struct tagSach
{
	int masach;
	char tensach[40];
	float giasach;
} Sach;

/*
* ham nhap 1 cuon Sach
*/

void nhap1Sach(Sach *x)
{
	printf("Nhap ma so sach: ");
	scanf("%d",&x->masach);
	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(x->tensach);
	printf("Nhap gia sach: ");
	scanf("%f",&x->giasach);
	printf("\n");
}

/*
* xuat 1 cuon Sach
*/

void xuat1Sach(Sach *x)
{
	printf("Ma sach: %d\n",x->masach);
	printf("Ten sach: %s\n",x->tensach);
	printf("Gia sach: %.f\n",x->giasach);
}

/*
* ham nhap So luong Sach
*/

void nhapSL(int &n)
{
	do
	{
		printf("\nMoi ban nhap so luong Sach: ");
		scanf("%d",&n);
		if(n<0 || n>MAX)
		{
			printf("Nhap sai! Moi ban nhap lai!\n");
		}	
	}
	while(n<0 || n>MAX);
}

/*
* ham nhap thong tin cac cuon Sach
*/

void nhapDS(Sach *a,int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nNhap thong tin sach thu %d\n",i+1);
		nhap1Sach((a+i));
	}
}

/*
* ham xuat thong tin cac Sach
*/

void xuatDS(Sach *a,int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nThong tin Sach thu %d\n",i+1);
		xuat1Sach((a+i));
	}
}

/*
* ham tim kiem Tuyen Tinh 
*/

void timTuyenTinhX(Sach *a,int n,int &X)
{
	int flag=0;
	for(int i=0; i<n; i++)
	{
		if((a+i)->masach == X)
		{
			printf("%d ",i+1);
			flag=1;
		}
	}
	if(flag == 0)
	{
		printf("Khong tim thay cuon Sach nao co masach la %d\n\n",X);
	}
	printf("\n");
}

/*
* ham swap doi gia tri 2 bien
*/

void swapX(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

/*
* ham sap xep cac cuon Sach theo masach
*/

void sortDSX(Sach *a,int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if((a+i)->masach > (a+j)->masach)
			{
				swapX(&(a+i)->masach,&(a+j)->masach);
			}
		}
	}
}

/*
* ham tim kiem Nhi Phan theo masach
*/

void timNhiPhanX(Sach *a, int n, int &X)
{
	int flag=0;
	int left=0,right=n-1,mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if((a+mid)->masach == X)
		{
			 printf("%d ",mid+1);
			 flag=1;
			 break;
		}
		if((a+mid)->masach < X) 
		{
			left=mid+1;
		}
		if((a+mid)->masach > X)			
		{
			right=mid-1;	
		}	
	}
	if(flag == 0)
	{
		printf("Khong tim thay cuon Sach nao co masach la %d\n\n",X);
	}
	printf("\n");
	return;
}

/*
* ham xuat ra cac cuon sach co ten la Y
*/

void timTuyenTinhY(Sach *a,int n,char Y[])
{
	int flag=0;
	for(int i=0; i<n; i++)
	{
		if(strcmp((a+i)->tensach,Y) == 0)
		{
			xuat1Sach((a+i));
			flag=1;
		}
	}
	if(flag == 0)
	{
		printf("Khong tim thay cuon Sach nao co masach la %s\n\n",Y);
	}
	printf("\n");
}

/*
* ham hoan doi gia tri cua 2 chuoi a b
*/

void swapY(char *a, char *b)
{
	char *tmp;
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}

/*
* ham sap xep DS Sach theo truong tensach
*/

void sortDSY(Sach *a,int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp((a+i)->tensach,(a+j)->tensach) > 0)
			{
				swapY((a+i)->tensach,(a+j)->tensach);
			}
		}
	}
}

/*
* ham xuat ra cac cuon Sach co ten la Y theo tim kiem Nhi Phan
*/

void timNhiPhanY(Sach *a, int n, char Y[])
{
	int flag=0;
	int left=0,right=n-1,mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(strcmp((a+mid)->tensach,Y) == 0)
		{
			 printf("%d ",mid+1);
			 flag=1;
			 break;
		}
		if(strcmp((a+mid)->tensach,Y) < 0) 
		{
			left=mid+1;
		}
		if(strcmp((a+mid)->tensach,Y) > 0)			
		{
			right=mid-1;	
		}	
	}
	if(flag == 0)
	{
		printf("Khong tim thay cuon Sach nao co masach la %s\n\n",Y);
	}
}

float timMaxDS(Sach *a,int n)
{
	int max=a->giasach;
	for(int i=1; i<n; i++)
	{
		if((a+i)->giasach > max)
		{
			max=(a+i)->giasach;
		}
	}
	return max;	
}

void xuatMaxDS(Sach *a,int n)
{
	float max=timMaxDS(a,n);
	for(int i=0; i<n; i++)
	{
		if((a+i)->giasach == max)
		{
			xuat1Sach((a+i));
			printf("\n");
		}
	}
	printf("\n");
}
void menuSach(Sach *a,int n)
{
	printf("Moi ban lua chon menu:\n");
	printf("1: Cau a va b\n");
	printf("2: Cau c\n");
	printf("3: Cau d\n");
	printf("4: Cau e\n");
	int chon;
	label:
	do
	{
		printf("Nhap lua chon cua ban: \n");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
				{
					/*
					* @ cau a b 1.2.2
					*/
	
					printf("Moi ban nhap SL cac Sach\n");
					nhapSL(n);
					printf("\nMoi ban nhap thong tin cac Sach: \n");
					nhapDS(a,n);
					printf("\nThong tin DS cac Sach sau khi nhap: \n");
					xuatDS(a,n);
					break;
				}
			case 2:
				{
					/*
					* @ cau c 1.2.2
					*/

					printf("\n----- Tim kiem Tuyen Tinh theo sach co masach X va in ra vi tri ----- \n");
					printf("\nMoi ban nhap vao masach X de chuong trinh tim kiem: ");
					int X;
					scanf("%d",&X);
					printf("\nVi tri cac cuon Sach co gia tri %d trong DS la: \n\n",X);
					timTuyenTinhX(a,n,X);
					printf("\n----- Tim kiem Nhi Phan theo sach co masach X va in ra vi tri ----- \n");
					sortDSX(a,n);
					printf("\nMang sau khi sap xep theo masach tang dan la: \n\n");
					xuatDS(a,n);
					printf("\nMoi ban nhap vao masach X de chuong trinh tim kiem: ");
					scanf("%d",&X);
					printf("\nVi tri cac cuon Sach co gia tri %d trong DS la: \n\n",X);
					timNhiPhanX(a,n,X);
					break;
				}
			case 3:
				{
					/*
					* @ cau d
					*/
	
					printf("\n----- Xuat ra cac Sach co ten la Y trong DS theo tim kiem Tuyen Tinh -----\n");
					printf("\nMoi ban nhap vao ten Y can tim: ");
					char Y[MAX];
					fflush(stdin);
					gets(Y);
					printf("\nThong tin cac cuon Sach co ten %s\n\n",Y);
					timTuyenTinhY(a,n,Y);
					printf("\n----- Tim kiem Nhi Phan theo sach co tensach Y va in ra vi tri ----- \n");
					sortDSY(a,n);
					printf("\nMang sau khi sap xep theo masach tang dan la: \n\n");
					xuatDS(a,n);
					printf("\nMoi ban nhap vao tensach Y de chuong trinh tim kiem: ");
					fflush(stdin);
					gets(Y);
					printf("\nVi tri cac cuon Sach co ten %s trong DS la: \n\n",Y);
					timNhiPhanY(a,n,Y);
				}
			case 4:
				{
					/*
					* @ cau e
					*/
					printf("\nCac cuon sach co gia cao nhat la: \n");
					xuatMaxDS(a,n);
				}
		}
	}
	while(chon<=0 || chon>=5);
	goto label;
}
int main(int argc, char** argv) 
{
	
	int n;
	Sach *a = new Sach[MAX];
	menuSach(a,n);
	
	delete[] a;
	getch();
	return 0;
}
