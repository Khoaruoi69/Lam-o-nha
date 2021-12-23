#include<stdio.h>
#include<conio.h>
#include<string.h>
/*void t(char&type){
do{
		char type; 
		printf("\nEnter employee type: ");
		scanf("%c", &type);
		if(type<'A'|| type>'Z'){
			printf("\nWrong import again");
		}
	}while(type<'A'||type>'Z');
}*/
int main(){
	char type; 
	printf("\nEnter employee type: ");
	scanf("%c", &type);
	int salary;
	printf("\nEnter salary: "); 
	scanf("%d",&salary);
	
	
	switch(type){
		case 'A':{
			printf("\nSalary of you: %d",salary+300);
			break;
		}
		case 'B':{
			printf("\nSalary of you: %d",salary+250);
			break;
		}
		default:
			printf("\nSalary of you: %d", salary+100);
	}
}
