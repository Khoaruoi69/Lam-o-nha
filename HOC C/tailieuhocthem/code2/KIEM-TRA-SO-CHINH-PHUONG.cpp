/* Kiem tra so chinh phuong */
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	printf("Moi ban nhap n = ");
	scanf("%d",&n);
	
	if ((int)sqrt(n) == sqrt(n)) printf("%d la so chinh phuong",n);
	else printf("%d khong la so chinh phuong",n);
	
	return 0;
}
