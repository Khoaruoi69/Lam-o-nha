#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap a:"); scanf("%f",&a);
    printf("nhap b:"); scanf("%f",&b);
    printf("nhap c:"); scanf("%f",&c);
    float D = b*b-4*a*c;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("PTVSN");
			}
			else{
				printf("PTVN");
			}
		}
		else{
			printf("x=%f",-c/(b));
		}
	}
	else if(D==0){
			printf("PT co nghiem kep: x1=x2=%f",(-b)/2*a);
		}
	if(D>0){
		printf("Pt co 2 nghiem phan biet:x1=%f,\tx2=%f",(-b+sqrt(D))/2*a,(-b-sqrt(D))/2*a);
		}
	else{
			printf("Pt vo nghiem");
		}
		return 0;
}





