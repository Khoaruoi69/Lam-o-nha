#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,c;
printf("nhap a:"); scanf("%d",&a);
printf("nhap b:"); scanf("%d",&b);
printf("nhap c:"); scanf("%d",&c);

int s=b*b-4*a*c;
if(a==0)
 if(b==0)
  if(c==0)
   {printf("PT VSN");}
  else 
   {printf("PT VN");}
 else printf("x=%d",-c/b);
else if (s<0) printf("PT vVN");
     else 
{    printf("x1=%d",(-b-sqrt(s))/2*a);
     printf("x2=%d",(-b+sqrt(s))/2*a);}
if (s==0) 
 printf("pt co nghiem kep:%d",-b/2*a);
 return 0;
}
 
