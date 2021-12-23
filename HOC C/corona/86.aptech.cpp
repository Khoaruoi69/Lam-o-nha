#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	float  basic, daper, bonper, loatdet;
	char name;
	printf("enter name: "); scanf("%s",&name);
	printf("enter basic: "); scanf("%f",&basic);
	printf("enter daper: "); scanf("%f",&daper);
	printf("enter bonper: "); scanf("%f",&bonper);
	printf("enter loatdet: "); scanf("%f",&loatdet);
	printf("Salary = %0.3f", basic+basic*daper/100+daper+bonper*basic/100-loatdet);
	 return 0;
	}
