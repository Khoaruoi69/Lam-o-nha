#include<stdio.h>
#include<conio.h>
int main(){
float a;
int b;
printf("nhap a:"); scanf("%f",&a);
printf("nhap b:"); scanf("%d",&b);
if(a==0)
 if(b==0)
  printf("PT vo so nghiem");
 else 
 printf("PT vo nghiem");
else 
printf("x=%f",-b/a);
return 0;

}
