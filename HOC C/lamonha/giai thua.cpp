#include<stdio.h>
#include<conio.h>
int main(){
	int n,s=1;
	printf("\nenter number:"); scanf("%d",&n);
	for(int i=n;i>0;i--){
		s*=i;
	}
	printf("\nGiai thua cua %d la: %d",n,s);
}
