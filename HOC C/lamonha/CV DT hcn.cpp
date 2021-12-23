#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("nhap a:"); scanf("%d",&a);
printf("nhap b:"); scanf("%d",&b);
if(a<b){
printf("a la chieu rong");
printf("b la chieu dai");}
else
{
printf("a la chieu dai");
printf("b lachieu rong");}

printf("dien tich hcn:%d",a*b);
printf("chu vi hcn:%d",(a+b)*2);
return 0;
}
