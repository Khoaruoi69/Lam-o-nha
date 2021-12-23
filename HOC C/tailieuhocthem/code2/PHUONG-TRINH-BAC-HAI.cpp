/*	Bai toan: Giai phuong trinh bac hai ax^2 + bx + c = 0
	Bien luan:
	- Neu a = 0: quay ve bien luan phuong trinh bac nhat bx + c = 0.
	- Neu a != 0:
		+ Lap delta = b^b - 4*a*c
		+ Neu delta < 0: phuong trinh vo nghiem.
		+ Neu delta = 0: phuong trinh co nghiem kep x = -b/2/a.
		+ Neu delta > 0: phuong trinh co hai nghiem
			++ x1 = (-b + sqrt(delta))/2/a.
			++ x2 = (-b - sqrt(delta))/2/a.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	
	printf("Moi ban nhap a = ");
	scanf("%d",&a);
	
	printf("Moi ban nhap b = ");
	scanf("%d",&b);
	
	printf("Moi ban nhap c = ");
	scanf("%d",&c);
	
	if (a == 0)
	{
		if (b == 0)
			if (c == 0) printf("Phuong trinh co vo so nghiem.\n");
			else printf("Phuong trinh vo nghiem.\n");
		else printf("Phuong trinh co nghiem x = %.1f",(float)-c/b);
	}
	else
	{
		int d = b*b - 4*a*c;
		if (d < 0) printf("Phuong trinh vo nghiem.\n");
		else
			if (d == 0) printf("Phuong trinh co nghiem kep x = %1.f",(float)-b/2/a);
			else
				printf("Phuong trinh co hai nghiem x1 = %.1f va x2 = %.1f\n",(float)(-b+sqrt(d))/2/a,(float)(-b-sqrt(d))/2/a);
	}
	
	return 0;
}
