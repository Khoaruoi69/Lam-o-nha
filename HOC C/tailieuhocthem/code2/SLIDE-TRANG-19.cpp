/* Xem de tai slide trang 19 */
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	// Nhap co kiem tra dieu kien
	do
	{
		printf("Moi ban nhap n = ");
		scanf("%d",&n);	
		if (n <= 0 || n > 100) printf("Ban nhap sai. Moi nhap lai.\n");
	}
	while (n <= 0 || n > 100);
	// So nguyen to, dem uoc
	int dem=0;
	for (int i=1;i<=n;i++)
		if (n%i == 0) dem++;
	if (dem == 2) printf("%d la so nguyen to\n",n);
	else printf("%d khong la so nguyen to\n",n);
	// So hoan thien
	int tong=0;
	for (int i=1;i<n;i++)
		if (n%i == 0) tong+=i;
	if (tong == n) printf("%d la so hoan thien\n",n);
	else printf("%d khong la so hoan thien\n",n);
	
	return 0;
}
