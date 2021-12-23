#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
do{
	printf("\nso luong sinh vien muon nhap:%d",n);
	scanf("%d",&n);
	if(n<0||n>100){
		printf("\nnhap sai nhap lai");
	}
}while(n<0||n>100);
}
struct sinhvien{

	char hovaten[30];
	char massv[10];
	char lop[10];
	char gioitinh;
	int namsinh;
	float ly,toan,tin,DTB;
};
typedef struct sinhvien sv;

void NDS1TSV(sv &a){
	fflush(stdin);
	printf("\nnhap ho ten sinh vien: "); gets(a.hovaten);
	fflush(stdin);
	printf("\nnhap ma so sinh vien: "); gets (a.massv);
	fflush(stdin);
	printf("\nnhap lop: "); gets(a.lop);
	fflush(stdin);
	printf("nhap nam sinh: "); scanf("%d",&a.namsinh);
	fflush(stdin);
		
	do{
		printf("\ngioi tinh (Nam Y/Nu X):");
		a.gioitinh=getche();
		if(a.gioitinh!='X'&&a.gioitinh!='Y'){
			printf("\nnhap sai");
		}
	}while(a.gioitinh!='X'&&a.gioitinh!='Y');
	if(a.gioitinh=='X'){
		printf("\ngioi tinh: Nu");
	}
	else{
		printf("\ngioi tinh: Nam");
	}
	
	printf("\nnhap diem toan: "); scanf("%f",&a.toan);
	printf("\nnhap diem ly: "); scanf("%f",&a.ly);
	printf("\nnhap diem tin: "); scanf("%f",&a.tin);
	a.DTB=(a.toan+a.ly+a.tin)/3;
		printf("\n++++++++++++++++++");
}
void NDSTSV(sv s[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap sinh vien thu %d",i);
		NDS1TSV (s[i]);
    }
}
void XDS1TSV(sv a){
	printf("\nHo va ten: "); puts(a.hovaten);
	printf("\nMSSV: "); puts(a.massv);
	printf("\nLop: "); puts(a.lop);
	printf("\nNam sinh: %d",a.namsinh);
	if(a.gioitinh=='X'){
	printf("\ngioi tinh: Nu");
	}
	else{
		printf("\ngioi tinh: Nam");
	}
	printf("\nDiem Toan: %0.2f",a.toan);
	printf("\nDiem Ly: %0.2f",a.ly);
	printf("\nDiem Tin: %0.2f",a.tin);
	printf("\nDiem trung binh: %0.2f",a.DTB);

}
void XDSTSV(sv s[],int n){
	printf("\n\t\t****Thong tin sinh vien*****");
	for(int i=0;i<n;i++){
		printf("\nSinh vien thu %d la: ",i);
		XDS1TSV(s[i]);
		printf("\n-----------------------");
	}
}
void XDSSVNu(sv s[],int n){
	printf("\n\t\t****** Danh sach sinh vien nu ******");
	int flag =0;
	for(int i=0;i<n;i++){
		if(s[i].gioitinh=='X'){
			XDS1TSV(s[i]);
			printf("\n*******************");
			flag =1;
		}
		}
		if(flag==0){
			printf("\n Ko co sinh vien nu :)");
	}
}
void XDSSVNam(sv s[],int n){
	printf("\n\t\t******Danh sach sinh vien nam *******");
	int flag=0;
	for(int i=0;i<n;i++){
		if(s[i].gioitinh=='Y'){
			XDS1TSV(s[i]);
			printf("\n*********************");
			flag=1;
		}
	}
	if(flag==0)
	printf("\n ko co sinh vien nam :)");
}
void DSSVTLai(sv s[],int n){
	printf("\n\t\t****** Danh sach sinh vien thi lai******");
	int flag=0;
	for(int i=0;i<n;i++){
		if(s[i].DTB<5){
			XDS1TSV(s[i]);
			printf("\n........................");
			flag=1;
		}
	}
	if(flag==0)
	printf("\n ko co hoc sinh thi lai :)");
}

int main (){
	int n;
	nhapn(n);
	sv s[100];
	NDSTSV(s,n);
	XDSTSV(s,n);
	XDSSVNu(s,n);
	XDSSVNam(s,n);
	DSSVTLai(s,n);
	return 0;
	
	
}
