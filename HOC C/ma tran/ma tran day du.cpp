#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 100
void nhapn(int &n)
{
	do{
		printf("Nhap ma tran cap: ");
		scanf("%d",&n);
	}while(n<0||n>100);
}

void taomatran(int a[][SIZE],int n)
{
	int MAX=100;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[i][j]=rand()%(MAX);
			
}


void lkdcc(int a[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)	
				printf("%4d",a[i][j]);
		}
	}
}

void lkdcp(int a[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j==n-1)	
			printf("%4d",a[i][j]);
		}
	}
	
}
void xuatmatran(int a[][SIZE],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			{
				printf("%4d",a[i][j]);
			}
		printf("\n");	
	}
}

int tinhtong(int a[][SIZE],int n,int &k)
{
	long s=0;
	do{
		printf("\nNhap dong thu: ");
		scanf("%d",&k);
	}while(k<0||k>100);
		
	for(int j=0;j<n;j++)
		{
			s+=a[k][j];
		}
	return s;
}

void tinhtongmoidong(int a[][SIZE],int n)
{
	long S=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			S+=a[i][j];	
		}
		printf("\nTong dong thu %d la: %ld",i,S);
		
	}
}


void tongmax(int a[][SIZE],int n)
{
	long S=0;
	int max=0,vtr=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			S+=a[i][j];	
		}
		
		if(S>max)
		{
			max=S;
			vtr = i;
		}
		
	}
	printf("\nDong co gia tri lon nhat la %d",vtr);
}

void WriteFile(int a[][SIZE],int &n, char * tenFile)
{
	FILE *f;
	f=fopen(tenFile,"wb");
	fwrite(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++)
		fwrite(&a[i],sizeof(a[i]),1,f);
	fclose(f);	
}

void ReadFile(int a[][SIZE],int &n, char* tenFile)
{
	FILE*f;
	f=fopen(tenFile,"rb");
	fread(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++)
		fread(&a[i],sizeof(a[i]),1,f);
	fclose(f);
}
int main()
{
	int n,d,c,k,chon;
	int a[SIZE][SIZE];
	srand((unsigned int) time(NULL));
	do{
		printf("\n\t------CHUONG TRINH MA TRAN-------");
		printf("\n1:Tao ma tran ngau nhien cap n: ");
		printf("\n2:Liet ke duong cheo chinh: ");
		printf("\n3:Liet ke duong cheo phu: ");
		printf("\n4:Tinh tong cua dong thu k: ");
		printf("\n5:Tinh tong moi dong: ");
		printf("\n6:Tim dong co tong max: ");
		printf("\n7:Ghi File");
		printf("\n8:Doc File");
		printf("\n0:Thoat chuong trinh!");
		printf("\n\nMoi ban chon: ");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
				{
					system("cls");
				nhapn(n);
				taomatran(a,n);
				printf("Ma tran ngau nhien la:\n");
				xuatmatran(a,n);
				break;
				}
			case 2:
				{
					system("cls");
				printf("\nDuong cheo chinh la: ");
				lkdcc(a,n);
				break;
				}
			case 3:
				{
					system("cls");
				printf("\nDuong cheo phu la: ");
				lkdcp(a,n);
				break;
				}
			case 4:
				{
					
				system("cls");
				long s=tinhtong(a,n,k);
				printf("\nTong cua dong thu %d la: %ld",k,s);
				break;
				}
			case 5:{
				
				system("cls");
				tinhtongmoidong(a,n);
				break;
				
			}						
			case 6:
				{
					
				system("cls");
				tongmax(a,n);
				break;
				}
			case 7:
				{
					system("cls");
				WriteFile(a,n,"Matran.dat");
				printf("\nGhi hoan thanh!");
				break;
				}
			case 8:
				
				{
					system("cls");
				ReadFile(a,n,"Matran.dat");
				printf("\nDoc hoan thanh!");
				break;
				}
			case 0:
				printf("Thoat chuong trinh!");							
		}
	}while(chon!=0);	
	return 0;
}
