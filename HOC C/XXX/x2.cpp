#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void nhapn(int&n){
do{
	printf("\nso luong phan tu muon nhap:");
	scanf("%d",&n);
	if(n<0){
		printf("\nnhap sai nhap lai");
	}
}while(n<0);
}
struct mang{
	int giatri;
};
typedef struct mang ma;
void nhapMang(ma&a){
	fflush(stdin);
	printf("\nnhap gia tri: "); scanf("%d",&a.giatri);
}
void Mang(ma m[],int n)
{
	for(int i=0;i<n;i++){
		printf("\nnhap [%d]: ",i);
		nhapMang(m[i]);
    }
}
void xuat1(ma a){
	printf("\t %5d ", a.giatri);
}
void xuatMang(ma m[], int n){
	printf("MAng: ");
	for(int i;i<n;i++){
		xuat1(m[i]);
	}	
}
void themso(ma m[],int n){
	n++;
	nhapMang(m[n-1]);
}
int main(){
	int n;
	ma m[100];
	ma a;
	int chon;
	do{
	system("cls");
	printf("\n1: de nhap DSTSV ");
	printf("\n2: de xuat XDSTSV ");
	printf("\n5: Them so ");
	printf("\n Hay chon: ");
	scanf("%d",&chon);
	switch(chon){
    	case 1: {	
    		nhapn(n);
    		Mang(m,n);
			break;
		}
			case 2:{
		    xuatMang(m,n);
		    system("pause");
			break;
		}
		case 5: {
			system("cls");
			themso(m,n);
			printf("\n them so: ");
			break;
		}
	}
    }while(chon!=0); 
	return 0;
}
