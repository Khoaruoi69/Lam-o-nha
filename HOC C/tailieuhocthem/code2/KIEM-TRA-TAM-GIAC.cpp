/* 	Bai toan: Kiem tra ba so co tao thanh tam giac khong.
		Neu co, cho biet loai tam giac.
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
	
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("Ba so da nhap tao thanh tam giac");
		
		if (a == b && b == c) printf(" deu.\n");
		else
			if (a*a+b*b == c*c || a*a+c*c == b*b || b*b+c*c == a*a) printf(" vuong.\n");
			else
				if (a == b || a == c || b == c) printf(" can.\n");
				else printf(" thuong.\n");
	}
	else
		printf("Ba so da nhap khong tao thanh tam giac.\n");
	return 0;
}
