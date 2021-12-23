#include<conio.h>
#include<stdio.h>
int main(){
	int num1,num2,s=0;
	printf("\nNhap num1: "); scanf("%d",&num1);
	printf("\nNhap num2: "); scanf("%d",&num2);
	for(--num1,--num2;num1>0,num2>0;--num1,--num2){
		
		if((num1%2!=0)||(num2%2!=0)){
			s+=num1+num2;
		}
	}
	printf("tong cac so le la: %d",s);
}
