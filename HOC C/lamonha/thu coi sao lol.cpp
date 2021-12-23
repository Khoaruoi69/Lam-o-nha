#include<stdio.h>
#include<conio.h>
int main(){
long n;
printf("nhap n:"); scanf("%ld",&n);
int d;
int i=0,s=0;
while(n>0)
 {d=n%10;
  n=(n-d)/10;
  s=s+d;
  i=i+1;
printf("%d",d);}
printf("tong lai:%d",s);
return 0;
}
