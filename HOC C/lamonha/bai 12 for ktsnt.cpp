#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
int D=0;
for(int i=1;i<=n;i=i+1)
 if( n%i==0)
  D=D+1;
if(D==2)
 printf("%d: la so ngto",n);
else 
 printf("%d: ko la so nguyen to",n);
 return 0;
}

