#include<stdio.h>
#include<conio.h>
#define N 100 // chieu cua vecto khong qua 100.
int main(){
	float x[N],y[N],s;
	int n,i;
	// so chieu thuc te cua cac vecto x va y 
	printf(" \n chieu cua vecto = ");
	scanf("%d",&n);
	// vao so lieu cho cac vecto x va y
	i=1;
	vaosl:
	printf("\n x[%d]= ", i);
	scanf("%f",&x[i]);
	printf("\n y[%d]=",i);
	scanf("%f",&y[i]);
	if(++i<=n){
		goto vaosl;
		// tinh tich vo huong 
	}
	s=0.0;
	i=1;
	tvh:
		s+=x[i]*y[i];
		if(++i<=n){
			goto tvh;
		}
		// in ra ket qua
	i=1;
	inkq:
	printf("\n x[%d]=%8.2f y[%d]=%8.2f",i,x[i],i,y[i]);
	if(++i<=n){
		goto inkq;
	}
	printf("\n\n tich vo huong = %8.2f",s);

	return 0;
}
