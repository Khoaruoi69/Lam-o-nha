#include<conio.h>
#include<stdio.h>
int main(){
	int a,b;
	printf(" nhap a: "); scanf("%d",&a);
	printf(" nhap b: "); scanf("%d",&b);
	printf("\nket qua : %8.2d", a<b?a:b);// gia tri cu tieu cua hai bien a va b;
	int s=a>b?a:b;// gan gia tri cuc dai cua bien a va b cho bien s
	printf("\n s = %d",s);
	return 0;
}
