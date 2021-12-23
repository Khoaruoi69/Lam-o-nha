#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int so;
	printf("\nnhap so 1 de tinh DT tam giac");
	printf("\nnhap so 2 de tinh DT hcn");
	printf("\nnhap so 3 de tinh DT hinh tron");
	printf("\nnhap so:"); scanf("%d",&so);
	switch(so)
	{
		case 1: 
		    {
			float h,d;
			printf("nhap chieu cao va nhap canh day:"); scanf("%f%f",&h,&d);
			float DT=(h*d)/2;
			printf("DT tam giac la:%f",DT);
			break;}
 	    case 2:
			{
			float a,b;
			printf("\nnhap chieu dai va nhap chieu rong:"); scanf("%f%f",&a,&b);
			float DT=a*b;
			printf("DT hcn la:%f",DT);
			break;}
		case 3:
		     {
			 float r;
			 printf(" nhap ban kinh:"); scanf("%f",&r);
			 float DT=M_PI*r*r; 
			 printf("DT hinh tron la:%f",DT);
			 break;}
		default: printf(" ban da nhap sai");	 
	return 0;		 	
	}
}
