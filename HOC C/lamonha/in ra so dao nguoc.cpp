#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
long d;
int i=0, s=0, g=0;
while(n>0)
{d=n%10;
 i=i*10+d;
 n=(n-d)/10;
 s=s+1;
 g=g+d;
}
printf("%d",i);

printf("dem so:%d",s);

printf("tong so:%d",g);
return 0;}

