#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c; 
printf("nhap a:"); scanf("%f",&a);
printf("nhap b:"); scanf("%f",&b);
printf("nhap c:"); scanf("%f",&c);
 float D=b*b-4*a*c;
if(a==0)
 if(b==0)
  if(c==0)
   printf("PT vo so  nghiem");
  else
  printf("PT vo nghiem");
 else 
 printf("x=%f",-c/b);
else if(D>0)
printf("PT co nghiem x1==%f",-b+ (sqrt(D)) /2*a);
printf("PT co nghiem x2==%f",(-b-sqrt (D))/2*a);
     else
printf("PT vo nghiem");
return 0;
}
