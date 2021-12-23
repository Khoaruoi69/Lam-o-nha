#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap a:"); scanf("%f",&a);
    printf("nhap b:"); scanf("%f",&b);
    printf("nhap c:"); scanf("%f",&c);
    float delta=b*b-4*a*c;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("PT VSN");}
			else {
			printf("PT VN");	
			}
		}
	    else {
	           printf("X=%f",-c/b);
		    }  
	}
		else if (delta==0){
		printf("PT co nghiem kep: x1=x2=%f",-b/2*a);
		}
		if(delta>0){
		printf("\nPT co hai nghiem: x1=%f",(-b+sqrt(delta))/2*a);
		printf("\n x2=%f",(-b-sqrt(delta))/2*a);
		}
		else{
		printf("PT VN");
		}
	return 0;
}
