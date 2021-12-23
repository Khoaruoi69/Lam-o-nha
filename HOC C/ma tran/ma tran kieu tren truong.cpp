#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

 
void nhapn(int & n){
	printf("\n nhap ma cap: "); 
	scanf("%d",&n);
}
void nhapmatran(int a[][30], int n){
	int max=5,min=-5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=min + rand()%(max-min);
		}
	}
}
void xuatmatran(int a[][30], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}
int main(){
	int n,a[30][30];
//	srand (time(NULL));
//	srand ((unsigned int)time (NULL));
	nhapn(n);
	nhapmatran(a,n);
	xuatmatran(a,n);
	return 0;
}
