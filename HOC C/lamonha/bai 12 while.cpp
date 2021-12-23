#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
int i=1, D=0;
while(i<=n)
{if(n%i==0)
 D=D+1;
 i=i+1;
}
if(D==2)
printf("%d: la so nguyen to",n);
else 
printf("%d: ko la so nguyen to",n);
return 0;
}
