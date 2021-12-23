#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
	do{
	printf("nhap n:"); scanf("%d",&n);
	if(n<0||n>100){
		printf("nhap sai nhap lai"); 
	}
    } while(n<0||n>100);
}
int ktht (int n){
	long s=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}		
	}
	if(s==n){
		return 1;
    } 
	else{
		return 0; 
	}
}
void sohothien(int n){
	if(ktht(n)==1){
		printf("\nso %d la so hoan thien",n);
	}
	else{
		printf("\nso %d ko la so hoan thien",n);
	}
}
void sohtdenn(int n){
	for(int i=1;i<n;i++){
		if(ktht(i)==1){
			printf("%4d",i);
		}
	}
}
int ktngto(int n){
	if(n<2) return 0;
	if(n==2)return 1;
	if(n%2==0) return 0;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
	} return 1;
}
void songto(int n){
	if(ktngto(n)==1){
		printf("\n%d la so nguyen to",n);
	}
	else{
		printf("\n%d ko la so nguen to",n);
	}
}
void songtolk(int n){
	for(int i=1;i<=n;i++){
		if(ktngto(i)==1){
			printf("%4d",i);
		}
	}
}









int main(){
	int n;
	nhapn(n);
	sohothien(n);
	printf("\nso hoan thien tu 1 den %d la",n);
	sohtdenn(n);
	songto(n);
	printf("\n so nguyen to tu 1 den n la:",n);
	songtolk(n);
	
	return 0;
}
