#include<conio.h>
#include<stdio.h>
int main(){
	int n;
	int a[100];
	printf("\nEnter n: "); scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap a[%d]: ",i); scanf("%d",&a[i]);
	}
	printf("\n so da nhap la: ");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	printf("\n so dao nguoc la: ");
	for(int i=n-1;i>0;i--){
		printf("\n%d",a[i]);
	}
}
