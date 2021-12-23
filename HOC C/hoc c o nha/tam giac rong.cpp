#include"stdio.h"
#include"conio.h"

int main()
{
int n;
printf("Nhap kich thuoc tam giac: ");
scanf("%d",&n);
printf(" ");

int a=(2*n-1);
int b=(a /2+1);

for (int i=1;i<=n;i++)
{
for (int j=1;j<=a;j++)
{
if (i==1)
printf("*");
else if ((j<i) || (j>(a+1-i)))
printf(" ");
else
printf("*");
}
printf(" ");
}
printf(" ");
return 0;
}
