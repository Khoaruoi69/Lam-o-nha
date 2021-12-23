/* Xem de tai slide trang 18 */

#include <stdio.h>

int main()
{
	int n;
	
	printf("Moi ban nhap n = ");
	scanf("%d",&n);
	
	// cau a
	printf("Cac so tu 1 den %d la:\n",n);
	for (int i=1;i<=n;i++) printf("%d\t",i);
	
	// cau b
	printf("\nCac so chan tu 1 den %d la:\n",n);
	for (int i=1;i<=n;i++) 
		if (i%2 == 0) printf("%d\t",i);
	
	//cau c1
	int s1=0;
	for (int i=1;i<=n;i++) s1+=i;
	printf("\nGia tri S1 = %d\n",s1);
	
	//cau c2
	float s2=0;
	for (int i=1;i<=n;i++) s2+=(float)i/(i+1);
	printf("Gia tri s2 = %.1f",s2);
	
	return 0;
}
