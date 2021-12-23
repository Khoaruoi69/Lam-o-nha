/* 	Bai tap: Giai phuong trinh bac nhat ax + b = 0
	Bien luan phuong trinh:
	- Neu a = 0:
		+ Neu b = 0: phuong trinh co vo so nghiem.
		+ Neu b != 0: phuong trinh vo nghiem
	- Neu a != 0: phuong trinh co nghiem x = -b/a.
*/
#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Moi ban nhap a = ");
	scanf("%d",&a);
	
	printf("Moi ban nhap b = ");
	scanf("%d",&b);
	
	if (a == 0)
		if (b == 0) printf("Phuong trinh co vo so nghiem.\n");
		else printf("Phuong trinh vo nghiem.\n");
	else printf("Phuong trinh co nghiem x = %.1f",(float)-b/a);
	
	return 0;
}
