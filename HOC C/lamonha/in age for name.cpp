#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int age;
	char name;
	printf("\nEnter age: "); scanf("%d",&age);
	printf("\nEnter name: "); scanf("%s", &name);
	while(age>0){
		printf("%s",name);
		age--;
	}
	return 0;
}
