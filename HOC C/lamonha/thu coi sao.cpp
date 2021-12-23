#include<stdio.h>
#include<conio.h>
int main(){
long n;
printf("nhap n:"); scanf("%ld",&n);
int d;
int i=1;
while(n>0)
 {d=n%10;
 n=(n-d)/10;
   i=i+1;
printf("%d",d);
 }
 printf("so chu so cua n:%d",i);
return 0;
}
