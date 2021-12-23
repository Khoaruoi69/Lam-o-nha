#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c;
printf("nhap a:"); scanf("%f",&a);
printf("nhap b:"); scanf("%f",&b);
printf("nhap c:"); scanf("%f",&c);
float max=a;
if (b>max)
   max=b;
if(c>max)
   max=c;
printf("so lon nhat:%f",max);
return 0;
}
