#include<stdio.h>
#include<conio.h>
int main(){
int x,n;
printf("nhap x:"); scanf("%d",&x);
printf("nhap n:"); scanf("%d",&n);
float T=1,i=1;
while(i<=x)
{ T=T*n; 
 i=i+1;
}
int d;
 d= T / 10;
printf("ket qua:%d",d);
return 0;
}
