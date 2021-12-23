#include<conio.h>
#include<stdio.h>
#include<string.h>
struct abc {
	char a[10];
	char b[10];
	
};
typedef struct abc z;
void nhapkytu(z&a){
	fflush(stdin);
	printf("\nnhap ky tu : "); gets(a.a);
	fflush(stdin);
	printf("\nnhap so so: "); gets(a.b);
}
void xuatkytu(z&a){
	printf("\nky tu :"); puts(a.a);
	printf("\nso so: "); puts(a.b);
}
void search(char a[10], char t[10]){
/*	char s;
	printf("\n nhap ma so muon tim: "); scanf("%s",&t);
	char s=strstr(a,t);
	if(s==NULL){
		printf("\nko co sinh so muon tim ");
	}
	else{
		xuatkytu(a);
	}*/
	char t[10],*s;
    printf("Nhap chuoi: ");
    gets(t);
    s=strstr(t,a);
    printf("Chuoi trich ra:");
    xuatkytu(a);
    puts(s);
	
}
int main (){
	z a;
	char t;
	nhapkytu(a);
	xuatkytu(a);
	search(a,t);
	return 0;
}
