#include<conio.h>
#include<stdio.h>
#include<string.h>
void nhapchuoi (char s1[], char s2[]){
	printf("\nnhap chuoi s1: "); gets(s1);
	printf("\nnhap chuoi s2: "); gets(s2);
}
void xuatchuoi(char s1[], char s2[]){
	printf("\nchuoi s1 la: "); puts(s1);
	printf("\nchuoi s2 la: "); puts(s2);
}
void dodaihaichuoi(char s1[],char s2[]){
	int k,i;
	i=strlen(s1);
	k=strlen(s2);
	printf("\ndo dai chuoi s1: %d",i);
	printf("\ndo dai chuoi s2: %d",k);
}
void diachi(char s1[],char s2[]){
	 
	char o=strstr(s1,s2);
	if(o==NULL){
		printf("s1 ko phai con s2");
	}
	else{
		printf("s1 la con s2");
	}
}
void noihaichuoi (char s1[],char s2[]){
	printf("\nnoi chuoi s1,s2:%s",strcat(s1,s2));
}
int main(){
	char s1[100],s2[100];
	nhapchuoi(s1,s2);
	xuatchuoi(s1,s2);
	dodaihaichuoi(s1,s2);
	printf("\ndia chi s1,s2: ");
	diachi(s1,s2);
	noihaichuoi(s1,s2);
	
	
	return 0;
}
