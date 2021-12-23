#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void nhapsv(int&n){
do{
	printf("\nso luong sinh vien muon nhap:");
	scanf("%d",&n);
	if(n<0||n>50){
		printf("\nnhap sai nhap lai");
	}
}while(n<0||n>50);
}
struct sinhvien {
	char hovaten[50];
	char mssv[10];
	char malop[10];
	int stc;
	int gia =370000;
};
typedef struct sinhvien sv;

void nhap1sv(sv &a){
	fflush(stdin);
	printf("\nnhap ho va ten: "); gets(a.hovaten);
    fflush(stdin);
	printf("\nnhap MSSV: "); gets(a.mssv);
	fflush(stdin);
	printf("\nnhap ma lop : "); gets(a.malop);
	fflush(stdin);
	printf("\nnhap so tin chi : "); scanf("%d",&a.stc);
}
void nhapdssv(sv s[],int n){
	for(int i=1;i<=n;i++){
		printf("\n nhap sinh vien thu %d: ", i);
		nhap1sv(s[i]);
	}
}
void xuat1sv(sv a){

	printf("\nHo va ten: "); puts(a.hovaten);
	printf("\nMSSV: "); puts(a.mssv);
	printf("\nMa Lop: "); puts(a.malop);
	printf("\nso tin chi : %d",a.stc);
	printf("\nHoc phi : %d",a.stc*a.gia);
}
void xuatdssv(sv s[],int n){
	printf("\nDanh sach sinh vien:");
	for(int i=1;i<=n;i++){
		printf("\n___________________________");
		printf("\n sinh vien thu %d : ",i);
		xuat1sv(s[i]);
	}
}
void tren15(sv s[], int n){
	printf("\n ---------danh sach sinh vien tren 15 tin chi----------");
	int flag;
	for(int i=1;i<=n;i++){
		if(s[i].stc>15){
			printf("\n---------------------");
			xuat1sv(s[i]);
			flag=1;
		}
	}
	if(flag==0){
		printf("\n khong co sinh vien tren 15 tinh chi");
	}
}
void hoanvi(sv &sv1, sv &sv2)
{
	        sv tam=sv1;
			sv1=sv2;
			sv2=tam;
}
int STT =1;
void sapxeptang(sv s[], int n){	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
				if(s[i].mssv > s[j].mssv){
					hoanvi(s[i],s[j]);
				}
			}
	}
	printf("\n----- Danh sach sap xep theo ma sinh vien--------");
		for(int i=0; i<n; i++){
			printf("\n----------");
				xuat1sv(s[i]);
					STT++;
		}
}
int main(){
	int n;
	sv s[100];
	sv a;
	int chon;
	do{
//	system("cls");
    printf("\n--------------------------");
	printf("\n1: de nhap DSTSV ");
	printf("\n2: de xuat XDSTSV ");
	printf("\n3: xuat dssv tren 15 tc");
	printf("\n4: sap xep masv tang dan ");
	printf("\n0: de thoat chuong trinh");
	printf("\n nhap so cho cong viec ban muon chon: ");
    scanf("%d",&chon);
    printf("\n------------------------\n");
    switch(chon){
    	case 1: {	
    		nhapsv(n);
    		nhapdssv(s,n);
			break;
		}
		case 2:{
		    xuatdssv(s,n);
		    system("pause");
			break;
		}
		case 3:{
			tren15(s,n);
			break;
		}
		case 4:{
			sapxeptang(s,n);
			break;
		}
		
	}
	}while(chon!=0);
	return 0;
}

























