#include<stdio.h>
#include<conio.h>

int main(){
	char kytu;
	int kt;
	printf("nhap ky tu: "); scanf("%c",&kytu);
    printf("%d",kytu);
    kt=kytu;
    if(kt<=90&&kt>=65){
    	printf("\n%c la chu Hoa",kytu);
	}
	if(kt<=122&&kt>=97){
		printf("\n%c la ky tu thuong",kytu);
	}
    return 0;
}
	
