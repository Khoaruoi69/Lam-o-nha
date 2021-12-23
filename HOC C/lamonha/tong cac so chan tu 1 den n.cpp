#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
float s=0;
int i=2;
while(i<=2*n)
{ s=s+i;
  i=i+2;
}
printf("ket qua:%f",s);
return 0;
}
