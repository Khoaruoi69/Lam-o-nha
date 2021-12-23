#include<stdio.h>
#include<conio.h>
void nhapn (int&n){
	do {
		printf("nhap n:"); scanf("%d",&n);
		if(n<0||n>1000){
			printf("nhap sai nhap lai");
		}
	}while(n<0||n>1000);
}
int ktnt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}

}
void songton(int n){
		if(ktnt(n)==1){
			printf("\n%d la so nguyen to",n);	
		}
		else{
			printf("\n%d ko la so nguyen to",n);
		}
}
	
void songto(int n){
	for(int i=1;i<=n;i++){
		if(ktnt(i)==1){
			printf("\t%d",i);
		}
	}
}
int main(){
	int n;
	nhapn(n);
	songton(n);
	printf("\nso nguyen to tu 1 den %d la:",n);
	songto(n);
	
}

