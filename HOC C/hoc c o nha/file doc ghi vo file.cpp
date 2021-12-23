#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int id;
	char *firstName;
	char *lastName;
	int age;
} Person;

static int id=100;

void getUserInput(FILE*fout){// thao tac thonh tin ra file
	
	Person p;
	
	p.id= id++;
	p.firstName= malloc(sizeof(char)*50);
	p.lastName=malloc(sizeof(char)*50);
	int choice =0;
	
	while (1){// lap vo han
	puts("Enter your frist last name, age:  ");
	scanf("%s%s%d",p.firstName,p.lastName,&p.age);
	fprintf(fout, "%5d%10s%10s%5d\n",p.id,p.firstName,p.lastName,p.age);// ghi ra file
	
	puts("continue? press 1; Exit ? press0: ???");
	scanf("%d",&choice);
	if(choice ==0 ){// thoat lap
	    break;
	}
	}
int main(){
	FILE*fin;// doc du lieu file
	FILE*fout;// ghi de lieu vao file
	//C:\\Users\\Khoa\\Desktop\\file
	//C:/Users/Khoa/Desktop/file
	
	fout=fopen("C:/Users/Khoa/Desktop/file", "a+");
	if(fout != NULL){
		getUserInput(fout);// thao tac ghi file
		fclose(fout); // dong file
	}
	return 0;
}
