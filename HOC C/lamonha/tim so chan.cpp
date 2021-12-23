#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("nhap n:"); scanf("%d",&n);
int i=1;
while(i<=n){
 if(i%2==0)
printf("\n%d",i);
i=i+1;
}
return 0;
}
