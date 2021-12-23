#include<stdio.h>
#include<conio.h>
void nhapn (int &n){
	do{
		printf("nhap n:"); scanf("%d",&n);
		if(n<0){
			printf("nhap sai nhap lai");
		}
	}while(n<0);
}
void phantichsongto (int n){
	int dem;
	for(int i=0;i<n;i++){
		dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
	if(dem){
		if(dem>1){
			printf("%d^%d",i,dem);	
		}
		else{
			printf("%d",i);	
		}
	}
	if(n>i){
		printf("*");
	}	
	}
}
int main(){
	nhapn(n);
	phantichsonguyento(n);
}

