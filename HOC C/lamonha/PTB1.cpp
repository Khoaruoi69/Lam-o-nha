#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	float b;
	printf("nhap a: "); scanf("%d",&a);
	printf("nhap b: "); scanf("%f",&b);
	if(a==0){
		if(b==0){
			printf("PTVSN");
		}
		else{
			printf("PTVN");
		}
	}
	else{
		printf("x=%f",-b/a);
    	}
	return 0;
}
