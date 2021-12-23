
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
bool B[26]={0};// danh dau chua dung
void nhapn( int n){
	printf("nhap ma tran ngau nhien cap: ");
	scanf("%d",&n);
}

void nhapmatran(int a[][100],int n){
		int tam,max=100;
	    int kt[max]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		do{
			tam= rand()%max;
}while(kt[tam]==0||tam<0||tam>max);
          a[i][j]=tam;
          kt[tam]=1;      
}
}
}
void xuatmatran(int a[][100],int n) {
	unsigned int i,j;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" %d",&a[i][j]);
	}
	printf("\n\n");
}
}
int main(){
	srand ((unsigned int)time (NULL));// khoi tao bo nho ngau nhien 
	int n,a[100][100];
	nhapn(n);
	nhapmatran (a,n);
	xuatmatran(a,n);
}



