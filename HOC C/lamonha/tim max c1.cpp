#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c;
printf("nhap a:"); scanf("%f",&a);
printf("nhap b:"); scanf("%f",&b);
printf("nhap c:"); scanf("%f",&c);
if(a>b)
 if(a>c)
 printf("%f:max",a);
 else
 printf("%f:max",c);
else if(b>c)
printf("%f:max",b);
 else
 printf("%f:max",c);
 return 0;
}
