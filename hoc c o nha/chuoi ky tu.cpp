#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapchuoikytu (char s1[], char s2[]){
	printf("\nnhap chuoi s1: "); gets(s1);
	printf("\nnhap chuoi s2: "); gets(s2);
}
void xuatchuoikytu(char s1[], char s2[]){
	printf("\nchuoi s1 la: "); puts(s1);
	printf("\nchuoi s2 la: "); puts(s2);
}
void chieudais1s2(char s1[],char s2[]){
	printf("\nchieu dai chuoi s1 la: %d", strlen(s1));
	printf("\nchieu dai chuoi s2 la: %d", strlen(s2));
}
void sosanhs1s2(char s1[],char s2[]){
	if((strcmp(s1,s2))==0){
		printf("\nchuoi s1 bang chuoi s2");
	}
	if((strcmp(s1,s2))>0){
		printf("chuoi s1 lon hon chuoi s2");
	}
	if((strcmp(s1,s2)<0)){
			printf("\nchuoi s2 lon hon chuoi s1");
		}
}

void laydiachis2trongs1(char s1[],char s2[]){
	printf("\ndia chi s2 trong s1 la: %s",strstr(s2,s1));
}
void chuoidaos1(char s1[]){
	printf("\n chuoi dao s1: %s", strrev(s1));
}
void nois1s2(char s1[],char s2[]){
	printf("\nnoi s1 s2: %s", strcat(s1,s2));
}
void copys1sangs2(char s1[],char s2[]){
	printf("\ncopy s1 sang s2 : %s",strcpy(s2,s1));
}

int main(){
	char s1[100],s2[100];
	nhapchuoikytu(s1,s2);
	xuatchuoikytu(s1,s2);
	chieudais1s2(s1,s2);
	sosanhs1s2(s1,s2);
	laydiachis2trongs1(s1,s2);
	chuoidaos1(s1);
	nois1s2(s1,s2);
	copys1sangs2(s1,s2);
	
}
