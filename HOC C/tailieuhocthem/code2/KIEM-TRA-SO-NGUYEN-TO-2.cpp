/* Kiem tra so nguyen to (dung ham) */

#include <stdio.h>
#include <math.h>

int KTSNT(int n)
{
	if (n < 2) return 0;
	for (int i=2;i<=(int)sqrt(n);i++)
		if (n%i == 0) return 0;
	return 1;
}

int main()
{
	int n;
	
	printf("Moi ban nhap n = ");
	scanf("%d",&n);
	
	if (KTSNT(n) == 1) printf("%d la so nguyen to\n",n);
	else printf("%d khong la so nguyen to\n",n);
	
	return 0;
}
