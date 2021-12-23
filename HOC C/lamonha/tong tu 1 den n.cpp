#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
int s=0,i=1; 
while(i<=n){

s=s+i;

i=i+1;}
printf("ket qua:%d",s);

return 0;
}


