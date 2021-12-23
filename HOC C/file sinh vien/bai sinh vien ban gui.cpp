#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int STT=1;
struct NgayThang
{
	int ngay,thang,nam;	
};

struct SinhVien
{
	char masv[8];
	char tensv[30];
	NgayThang ngaysinh;
	char *xeploai;
	float DT,DL,DH,DTB;
	bool GT;
	
};
/////////////////////////////////
void intieude();
void Nhap1sv(SinhVien &sv);
void Nhapdssv(SinhVien dssv[], int &n);
void Xuat1sv(SinhVien sv);
void Xuatdssv(SinhVien dssv[], int n);
int Timsv_ten(SinhVien dssv[], int n, char ten[]);
int Timsv_ma(SinhVien dssv[], int n, char ma[]);
void tim_theothutu(SinhVien dssv[], int n, int STT);
void lietke5max(SinhVien dssv[], int n);
void hoanvi(SinhVien &sv1, SinhVien &sv2);
int Lietkesinh_T10(SinhVien dssv[], int n);
void sapxeptang(SinhVien dssv[], int n);
void xoa_ma(SinhVien dssv[], int &n, char xoama[]);
void xoa_ten(SinhVien dssv[], int &n, char xoaten[]);
////////////////////////////////

void Nhap1sv(SinhVien &sv)
{
	printf("\nNhap ho ten sinh vien: ");
	fflush(stdin);
	gets(sv.tensv);
	printf("\nNhap ma sinh vien: ");
	fflush(stdin);
	gets(sv.masv);
	printf("\nNhap ngay sinh : ");
	scanf("%d/%d/%d",&sv.ngaysinh.ngay,&sv.ngaysinh.thang,&sv.ngaysinh.nam);
	do 
	{
		printf("\nNhap diem toan: ");
		scanf("%f",&sv.DT);
	}while(sv.DT<0 || sv.DT>10);
	
	do 
	{
		printf("\nNhap diem ly: ");
		scanf("%f",&sv.DL);
	}while(sv.DL<0 || sv.DL>10);
	
	do 
	{
		printf("\nNhap diem hoa: ");
		scanf("%f",&sv.DH);
	}while(sv.DH<0 || sv.DH>10);
	
	sv.DTB=(sv.DT+sv.DL+sv.DH)/3;
	
	if(sv.DTB >=8.0 && sv.DTB<=10)
	{
		sv.xeploai = "Gioi";
	}
	if(sv.DTB >=7 && sv.DTB<8.0) {
		sv.xeploai = "Kha";
	}
	if(sv.DTB >=5.5 && sv.DTB<7) {
		sv.xeploai = "Trung Binh";
	}
	if(sv.DTB >=4 && sv.DTB<5.5) {
		sv.xeploai = "Yeu";
	}
	if(sv.DTB >=0 && sv.DTB<4) {
		sv.xeploai = "Kem";
	}
}

void Nhapdssv(SinhVien dssv[], int &n)
{
	do 
	{
		printf("\nNhap so luong sinh vien: ");
		scanf("%d",&n);
	}while(n<0);
	for(int i=0; i<n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d: \n",i+1);
		Nhap1sv(dssv[i]);
	}
}

void Xuat1sv(SinhVien sv)
{
	printf("\n%-5d %-10s %-20s\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",STT,sv.masv,sv.tensv,sv.DT,sv.DL,sv.DH,sv.DTB,sv.xeploai);
}

void intieude()
{
	printf("\n==============================THONG_TIN_SINH_VIEN==============================\n");
	printf("\n%-5s %-10s %-20s\t%s\t%s\t%s\t%s\t%s\n","STT","Masv","Hoten","Toan","Ly","Hoa","DTB","XL");
}

void Xuatdssv(SinhVien dssv[], int n)
{
	intieude();
	for(int i=0; i<n; i++)
	{
		Xuat1sv(dssv[i]);
		STT++;
	}
}

int Timsv_ten(SinhVien dssv[], int n, char ten[])

{
	intieude();
	int kq=0;
	for(int i=0; i<n; i++)
	{
		if(strstr(dssv[i].tensv,ten)!=NULL)
		{
			Xuat1sv(dssv[i]);
			kq=1;
			STT++;
		}
	}
	return kq;
}

int Timsv_ma(SinhVien dssv[], int n, char ma[])
{
	int kq=0;
	for(int i=0; i<n; i++)
	{
		if(strcmp(dssv[i].masv,ma)==0)
		{
			Xuat1sv(dssv[i]);
			kq=1;
			STT++;
		}
	}
	return kq;	
}
/*void tim_theothutu(SinhVien dssv[], int n, int STT)
{
	for(int i=0; i<n; i++)
	{
		if(STT==3)
		{
			Xuat1sv(dssv[i]);
			STT++;
		}
	}
}*/
void hoanvi(SinhVien &sv1, SinhVien &sv2)
{
	SinhVien tam=sv1;
			sv1=sv2;
			sv2=tam;
}

void lietke5max(SinhVien dssv[], int n)

{
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
			{
				if(dssv[i].DTB < dssv[j].DTB)
				{
					hoanvi(dssv[i],dssv[j]);
				}
			}
	}
		for(int i=0; i<5; i++)
		
		{
			if(n>=5)
				{
					Xuat1sv(dssv[i]);
					STT++;
				}
			else 
				printf("\t\t\tKo du 5 sinh vien ko the xuat\n");	
		}
			
			
		
}

int Lietkesinh_T10(SinhVien dssv[], int n)
{
	int kq=0;
	for(int i=0; i<n; i++)
		if(dssv[i].ngaysinh.thang==10)
		{
			Xuat1sv(dssv[i]);
			STT++;
			kq=1;
		}
		return kq;
}

void sapxeptang(SinhVien dssv[], int n)

{
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
			{
				if(dssv[i].DTB > dssv[j].DTB)
				{
					hoanvi(dssv[i],dssv[j]);
				}
			}
	}
		for(int i=0; i<n; i++)
		
		{
				Xuat1sv(dssv[i]);
					STT++;
		}
	
}

void xoa_ma(SinhVien dssv[], int &n, char xoama[])
{
	int vt=-1;
	for(int i=0; i<n; i++)
	{
		if(strcmp(dssv[i].masv,xoama)==0)
		{
			vt = i;
			
		}break;
	}
	if(vt >=0)
	{
		for(int i=vt ;i<n-1; i++)
		dssv[i]=dssv[i+1];
			n--;
		printf("\nDa xoa xong.....\n");
	}
	else 
		printf("\nCo thay sinh vien do dau ma xoa\n");
}

void xoa_ten(SinhVien dssv[], int &n, char xoaten[])
{
	int vt=-1;
	for(int i=0; i<n; i++)
	{
		if(strstr(dssv[i].tensv,xoaten)!=NULL)
		{
			vt = i;
		}break;
	}
	if(vt>=0)
	{
		for(int i=vt; i<n-1; i++)
		dssv[i]=dssv[i+1];
			n--;
		printf("\n...Delete complete...\n");	
	}
	else 
		printf("\nKo tim thay ten sinh vien can xoa\n");
}
int main()
{
	SinhVien dssv[100];
	int n,luachon;
	Nhapdssv(dssv, n);
	do 
	{
		printf("\n!Moi chon lenh!\n");
		printf("\n1.Xuat thong tin sinh vien: \n");
		printf("\n2.Tim sinh vien bang ten: \n");
		printf("\n3.Tim sinh vien bang ma: \n");
		printf("\n4.Liet ke 5 dua diem cao nhat lop: \n");
		printf("\n5.Liet ke nhung sinh vien sinh trong thang 10: \n");
		printf("\n6.Sap xep tang dan theo diem trung binh: \n");
		printf("\n7.Xoa sinh vien dua tren ma sv: \n");
		printf("\n8.Xoa sinh vien dua tren ten sv: \n");
		printf("\n9.Sua thong tin sinh vien dua tren ma sv: \n");
		printf("\n10.Tim sinh vien hoc o truong DHCN: \n");
		printf("\n11.Sua thong tin sinh vien dua tren ten sv: \n");
		printf("\n12.Them 1 sinh vien vao danh sach: \n");
		printf("\n13.Liet ke sinh vien hoc duoc 1 nam: \n");
		
		printf("\n>>>>>Moi chon: ");
		scanf("%d",&luachon);
		
		switch(luachon)
		{
			case 1:
			{
				Xuatdssv(dssv, n);
			}break;
			
			case 2:
			
			{
				char ten[30];
				printf("\nNhap ten can tim: ");
				fflush(stdin);
				gets(ten);
				int kq=Timsv_ten(dssv, n, ten);
				if(kq==0)
				{
					printf("\nko tim thay sinh vien nay!!!\n");
				}
					
			}break;
			
			case 3:
			
			{
				char ma[8];
				printf("\nNhap ma can tim: ");
				fflush(stdin);
				gets(ma);
				int kq=Timsv_ma(dssv, n, ma);
				if(kq==0)
					printf("\nKo co ma sinh vien nay: \n");
			}break;
			
			case 4:	//tim_theothutu(dssv, n ,STT);
			
			{
				intieude();
			lietke5max(dssv, n);
				
			}break;
			
			case 5:
			
			{
				intieude();
				int kq=Lietkesinh_T10(dssv, n);
				if(kq==0)
					printf("\t\t\t!!Ko co chau nao sinh trong thang 10\n");
			}break;
			
			case 6:
			
			{
				intieude();
				sapxeptang(dssv, n);
			}break;
			
			case 7:
			
			{
				 char xoama[8];
				 printf("\nNhap ma can xoa: ");
				fflush(stdin);	
				 gets(xoama);
				 xoa_ma(dssv, n, xoama);
			}break;
			
			case 8:
			
			{
				char xoaten[30];
				printf("\nNhap ten can xoa: ");
				fflush(stdin);
				gets(xoaten);
				xoa_ten(dssv, n, xoaten);
				
			}break;
		
			case 9:
			
			{
				
			}break;
		
		}
	}while(luachon!=0);
	
	
return 0;	
}

