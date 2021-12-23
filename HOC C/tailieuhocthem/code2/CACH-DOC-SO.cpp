/* Chuong trinh nhap so nguyen co hai chu so. In cach doc */

#include <stdio.h>

int main()
{
	int n;
	
	do
	{
		printf("Moi ban nhap so nguyen co hai chu so: ");
		scanf("%d",&n);
		if (n<10 || n>99) printf("So ban nhap khong hop le. Moi nhap lai.\n");
	}
	while (n<10 || n>99);
	
	int chuc=n/10;
	int donvi=n%10;
	
	switch (chuc)
	{
		case 1: printf("Muoi "); break;
		case 2: printf("Hai muoi "); break;
		case 3: printf("Ba muoi "); break;
		case 4: printf("Bon muoi "); break;
		case 5: printf("Nam muoi "); break;
		case 6: printf("Sau muoi "); break;
		case 7: printf("Bay muoi "); break;
		case 8: printf("Tam muoi "); break;
		case 9: printf("Chin muoi "); break;
	}
	
	switch (donvi)
	{
		case 1: break;
		case 2: printf("hai"); break;
		case 3: printf("ba"); break;
		case 4: printf("tu"); break;
		case 5: printf("lam"); break;
		case 6: printf("sau"); break;
		case 7: printf("bay"); break;
		case 8: printf("tam"); break;
		case 9: printf("chin"); break;
	}
	
	return 0;
}
