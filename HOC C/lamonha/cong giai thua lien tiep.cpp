#include<stdio.h>
#include<conio.h>
int main(){
int n; 
printf("nhap n:"); scanf("%d",&n);
float s=0;
int i=1,a=1;

 while(i<=n)
 {a=a*i;
  s=s+a;
  i=i+1;
 }

printf("ket qua:%f",s);
return 0;
}
