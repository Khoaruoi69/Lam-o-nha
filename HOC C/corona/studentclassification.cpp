#include<stdio.h>
#include<conio.h>
int main(){
	float M1,M2,M3,a;
	int point;
	printf("\nEnter point M1: "); scanf("%f",&M1);
	printf("\nEnter point M2: "); scanf("%f",&M2);
	printf("\nEnter point M3: "); scanf("%f",&M3);
    a=(M1+M2+M3)/3;
	printf("\nPoint avg:%f",a);
	
	if(a>=90){
		printf("\nStudent stype: E+");
	}
	if(a>=80&&a<90){
		printf("\nStudent stype: E");
	}
	if(a>=70&&a<80){
	    printf("\nStudent stype: A+");
	}
	if(a>=60&&a<70){
		 printf("\nStuden stype: A");
	} 
	if(a>=50&&a<60){
		 printf("\nStuden stype: B+");
	}
	if(a<50){
		printf("\nFAIL");
	}
	return 0;
}
