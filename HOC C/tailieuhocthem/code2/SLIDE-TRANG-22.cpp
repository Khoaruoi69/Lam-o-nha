/* Xem de tai slide trang 22 */
#include <stdio.h>

int main()
{
	int n; // khai bao so luong phan tu
	int a[100]; // khai bao mang a co 100 phan tu
	// voi mang so thuc ==> float a[100]
	// nhap so phan tu
	do
	{
		printf("Moi ban nhap so phan tu n = ");
		scanf("%d",&n);
		if (n<0 || n>100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (n<0 || n>100);
	// nhap mang
	for (int i=0;i<n;i++) // vong for kinh dien :v
	{
		printf("Moi ban nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	// xuat mang
	printf("Mang ban vua nhap la: ");
	for (int i=0;i<n;i++) printf("%d\t",a[i]);
	// xuat cac phan tu chia het cho 3
	printf("\nCac phan tu chia het cho 3: ");
	for (int i=0;i<n;i++)
		if (a[i]%3 == 0) printf("%d\t",a[i]);
	// dem so luong phan tu duong
	int dem=0;
	for (int i=0;i<n;i++)
		if (a[i] > 0) dem++;
	printf("\nSo phan tu duong la: %d",dem);
	// dem so luong phan tu am ==> lam tuong tu nhe :v
	// tinh tong cac phan tu duong
	int tong=0;
	for (int i=0;i<n;i++)
		if (a[i] > 0) tong+=a[i];
	printf("\nTong cac phan tu duong: %d",tong);
	// tinh tong cac phan tu am ==> lam tuong tu nhe :v
	// tinh trung binh cong cac phan tu
	int tong1=0;
	for (int i=0;i<n;i++) tong1+=a[i];
	printf("\nTBC cua cac phan tu: %.1f",(float)tong1/n);
	// tinh trung binh cong cac phan tu duong
	int tong2=0;
	int d=0;
	for (int i=0;i<n;i++)
		if (a[i] > 0) 
		{
			tong2+=a[i];
			d++;	
		}
	printf("\nTBC cua cac phan tu duong: %.1f",(float)tong2/d);
	// tinh trung binh cong cac phan tu am ==> lam tuong tu nhe :v
	// tim phan tu duong dau tien
	for (int i=0;i<n;i++)
		if (a[i] > 0)
		{
			printf("\nPhan tu duong dau tien la: %d",a[i]);
			break;
		}
	// tim phan tu duong cuoi cung
	for (int i=n-1;i>=0;i--)
		if (a[i] > 0)
		{
			printf("\nPhan tu duong cuoi cung la: %d",a[i]);
			break;
		}
	// tim phan tu lon nhat
	int m=a[0];
	for (int i=0;i<n;i++)
		if (m < a[i]) m=a[i];
	printf("\nPhan tu lon nhat la %d",m);
	//tim phan tu nho nhat
	int mi=a[0];
	for (int i=0;i<n;i++)
		if (mi > a[i]) mi=a[i];
	printf("\nPhan tu nho nhat la %d",mi);
	
	return 0;
}
