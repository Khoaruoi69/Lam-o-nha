#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

void nhapn(int &n){
	printf("\nnhap ma tran cap: ");
	scanf("%d",&n);
}
void matran(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d  ",rand()%100);
	}
		printf("\n\n");
}
}
int main(){
	int n;
	nhapn(n);
	matran(n);
}





















