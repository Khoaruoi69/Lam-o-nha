/* Kiem tra so nguyen to (khong dung ham) */

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	printf("Moi ban nhap n = ");
	scanf("%d",&n);
	
	if (n < 2)
	{
		printf("%d khong la so nguyen to.\n",n);
		return 0;
	}
	
	for (int i=2;i<=(int)sqrt(n);i++)
		if (n%i == 0)
		{
			printf("%d khong la so nguyen to.\n",n);
			return 0;
		}
		
	printf("%d la so nguyen to.\n",n);
	return 0;
}
