#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void slnv(int&n){
	do{
		printf("nhap so luong nhan vien: ");
		scanf("%d",&n);
		if(n<0){
			printf("\nnhap sai nhap lai");
		}
	}while(n<0);
}
struct nhanvien{
	char name[10];
	char surname[10];
	float salary;
};
typedef nhanvien nv;
void NDS1NV(nv & a){
	fflush(stdin);
	printf("\nName: "); gets(a.name);
	printf("\nsurname: "); gets(a.surname);
	fflush(stdin);
	printf("\nSalary: "); scanf("%f", &a.salary);
}
void NDSNV(nv v[], int n){
	for(int i=0;i<n;i++){
		printf("\nEnter Nhanvien number %d : ",i);
		NDS1NV(v[i]);
	}
}
void XDS1NV (nv & a){
	printf("\nName: "); puts(a.name);
	printf("\nSurname: "); puts(a.surname);
	printf("\nSalary: ",a.salary); 
}
void XDSNV(nv v[], int n){
	printf("\nNhan vien ><: ");
	for(int i=0;i<n;i++){
		printf("\nNhan vien number %d : ",i);
		XDS1NV(v[i]);
	printf("\n-------------------------------");
		}
}
int main(){
	int n;
	nv v[100];
	nv a;
	int check;
	do{
		system("cls");
		printf("\n Check: ");
		printf("\n1: Nhap danh sach nhan vien ");
		printf("\n2: Danh sach nhan vien");
		printf("\nnhap cong viec muon chon: "); scanf("%d",&check);
		switch(check){
			case 'A': {
				slnv(n);
				NDSNV(v,n);
				system("pause");
				break;
			}
			case 2: {
				XDSNV(v,n);
				system("pause");
				break;
			}
		}
		}while(check!=0);
		
}

















