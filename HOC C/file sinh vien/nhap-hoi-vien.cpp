#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 100

struct hoivien
{
	char mahoivien[20];
	char tenhoivien[20];
	float diemhoivien;
	float diemthanhtoan;
	float diemconlai;
	int ngay,thang,nam;
	
};
typedef struct hoivien hv;


void nhapn ( int &n)
{
	printf("\nNhap hoi vien :");scanf("%d",&n);
}

void nhap1hv ( hv &x )
{
	printf("\nNhap ma hoi vien :"); fflush (stdin); gets (x.mahoivien);
	printf("\nNhap ten hoi vien :"); fflush ( stdin); gets ( x.tenhoivien);
	printf("\nNhap Diem hoi vien :"); scanf("%f",&x.diemhoivien);
	printf("\nDiem thanh toan :"); scanf("%f", &x.diemthanhtoan);
	printf("\ndiem con lai cua hoi vien :"); scanf("%f",&x.diemconlai);
	
	printf("\nNhap nam:"); scanf("%d",&x.nam);
	do{
		printf("\nNhap thang :"); scanf("%d",&x.thang);
		if( x.thang<0 || x.thang >12)
		printf("\nNhap sai roi kia ban eiii lam lai diii ngu gk3 ^^");
	}while( x.thang <0 || x.thang>12);
	
	switch(x.thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10 :
		case 12:
		do{
			printf("\nnhap ngay di con di~ :");scanf("%d",&x.ngay);
			if(x.ngay <0 || x.ngay >31);
			printf("\n nhap sai roi kia` ");
		}	while(x.ngay <0 || x.ngay >31);
		break ;
		case 4: case 6 : case 9 : case 11:
		do{
			printf("\nnhap ngay di con di~ :");scanf("%d",&x.ngay);
			if(x.ngay <0 || x.ngay >30);
			printf("\n nhap sai roi kia` ");
		} while( x.ngay <0 || x.ngay >30);
		break;
	
		case 2:
			if((x.nam%4==0)|| (x.nam%100!=0))
		{
		
		do{
				printf("\nNhap ngay:");scanf("%d",&x.ngay);
			if(x.ngay <0 || x.ngay >29)
			printf("\nNhap sai nhap lai di hihi");
		}while(x.ngay <0 || x.ngay >29);
	          }
		else
	    {
	    	printf("\nNhap ngay:");scanf("%d",&x.ngay);
			if(x.ngay <0 || x.ngay >28)
			printf("\nNhap sai nhap lai di hihi");
		}while(x.ngay <0 || x.ngay >28);
		break ;
			
	}
}


void nhapcachoivien ( hv a[], int n)
{ 
    for ( int i=0 ; i<n ; i++)
    {
        	printf("\n------------- Nhap hoi vien vo day-------------\n", i);
         	nhap1hv(a[i]);
   }
}

void xuat1hv( hv &x)
{
	printf("\nNhap ma hoi vien :"); puts (x.mahoivien);
	printf("\nNhap ten hoi vien :"); puts( x.tenhoivien);
	printf("\nNhap Diem hoi vien :%0.2f",x.diemhoivien);
	printf("\nDiem thanh toan :%0.2f", x.diemthanhtoan);
	printf("\ndiem con lai cua hoi vien :%0.2f",x.diemconlai);
	printf("\nNhap nam: %d / %d / %d",x.ngay, x.thang,x.nam);
}

void xuatcachoivien ( hv a[], int n)

	{
	printf("\n \n ------------------- ` The End Bro ` ---------------------\n \n");
	         for( int i=0 ;i<n ;i++)
			{
	         printf("\n------------------- %d ---------------------\n",i);
	         xuat1hv(a[i]);
          }
}

void themhv( hv a[], int n, hv &x)
{
	n++;
	nhap1hv( a[n-1]);
}

void ghiFile ( hv a[],int &n, char*tenFile)
{
	FILE*f;
	f=fopen(tenFile,"r+");
	fwrite(&n,sizeof(n), 1 ,f);
	 for( int i ; i<n ; i++)
	 fwrite (&a[i], sizeof(a[i]),1,f);
	fclose (f) ;
}

void xuatbla (hv a[],int n)
{     printf("\nn nhap ten muon tim: ");
char tenhoivien[20];
fflush(stdin);
gets(tenhoivien);
	for (int i=0;i<n;i++)
	if(stricmp(tenhoivien,a[i].tenhoivien)==0)
	xuat1hv(a[i]);
}

void docFile ( hv a[] , int &n , char*tenFile)
{
	FILE*f;
	f=fopen(tenFile, "r+");
	fread(&n, sizeof(n),1,f);
	 for( int i=0 ;i<n ;i++)
	 fread ( &a[i], sizeof(a[i]),1,f);
	fclose(f); 
}

void suadiem(hv a[],int n){
	char mahoivien[20];
	float diemhoivien;
	float diemthanhtoan;
	float diemconlai;
		printf("\nnhap ma so hoi vien muon sua : \t");
		fflush(stdin);
		gets(mahoivien);
	for(int i=0;i<n;i++){
		if(stricmp(mahoivien,a[i].mahoivien)==0){
			printf("\nsua hoi vien ma so : %s ",mahoivien );
			fflush(stdin);
			printf("\n sua diem hoi vien :  "); scanf("%4f",&a[i].diemhoivien);
		}
	}
	
}

int main()
{
	int n;
	hv a[30];
	int chon;
	hv x;
	
	do{
		system("cls");
		printf("\n1.Nhap hoi vien:");
		printf("\n2.Ghi danh sach :");
		printf("\n3.Doc danh sach :");
		printf("\n4.Hien thi danh sach :");
		printf("\n5.them danh sach :");
		printf("\n6.sua diem hoi vien :");	
		printf("\n0.Out broooo :)))");scanf("%d",&chon);
		switch (chon)
		{
			case 1 :
			    system("cls");
			    printf("\nNhap hoi vien:");
			    nhapn(n);
			    nhapcachoivien(a,n);
			    break;
			case 2:
			    ghiFile(a,n,"a.txt");
				printf("\n Ghi hoan thanh");
				system("pause");
				break;
			case 3:
				docFile(a,n,"a.txt");
				printf("\nDa doc hoan thanh");
				system("pause");
				break;
			case 4:
			    system("cls");	
				printf("\n\n -------------- Thong tin hoi vien -------------\n\n");
				xuatcachoivien(a,n);
				system("pause");
			case 5:
				 system("cls");
				printf("\n\n--------them hoi vien ne------------");
				themhv(a,n,x);
				system("pause");
				break;	
			case 6:{
				system("cls");
				suadiem(a,n);
				system("pause");
				break;
}
			case 0:{
			
				 printf("\nBye heee"); 
				 xuatbla(a,n); 
				 system("pause");
		}
	}
	}while( chon!=0);
	return 0;
}
