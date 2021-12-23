#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,e,f;
	printf("nhap a:"); scanf("%d",&a);
	printf("nhap b:"); scanf("%d",&b);
	printf("nhap c:"); scanf("%d",&c);
	printf("nhap d:"); scanf("%d",&d);
	printf("nhap e:"); scanf("%d",&e);
	printf("nhap f:"); scanf("%d",&f);
	float D=a*e-d*b,
          Dx=c*e-f*b,
		  Dy=a*f-d*c;
	if(D==0){
	printf("\n PT VN");}
	else{
		if(Dx==0){
			printf("\n PT VN");
		}
		else{
			printf("\n x=%f",Dx/D);
		}
		if(Dy==0){
			printf("\n PT VN");	
		}
		else{
			printf("\n y=%f",Dy/D);
		}
	}
	return 0;	  	
	 }

