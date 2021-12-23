#include<stdio.h>
#include<conio.h>

void nhapn (int&n)
{
	do {
		printf("nhap vao so phan tu n:");
		scanf("%d",&n);
	if(n<=0||n>100){
		printf("\n ban nhap sai nhap lai");}
	} while(n<=0||n>100);
}
void nhapmang(int a[],int n)
{
	for(int i =0;i<n;i++){
	//	printf("nhap a[%d]=",i);
	a[i]=i;
	//	scanf("%d", &a[i]);
	}	
}
void xuatmang (int a[], int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}

int tinhtong(int a[],int n){
	long s=0;
	for(int i=0;i<n;i++){
		s=s+a[i];
	}
	return s;
}

int soamdautien (int a[],int n){
	int t;
	for(int i=0;i<n;i++){
	if(a[i]<0){
		t++;
		printf("\n so am dau tien la:%d",a[i]);
		return a[i];
	}
	if (t==0)
			printf("\n Mang khong co so am ");			
} return 0;
}

int sochandautien(int a[],int n){
	for(int i=0;i<n;i++)
		if(a[i]%2==0){
			printf("\n so chan dau tien la: %d",a[i]);	
		return a[i];
		}
return 0;
}

void lecuoicung (int a[], int n){
	int d;
	for(int i=0;i<n;i++){
		if(a[i]%2 !=0){
			d=a[i];
		}
	
	}	printf("\n le cuoi cung la: %d",d);
}
int sophantuchan(int a[],int n) {
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			dem++;
	    } }
		return dem;
}

int timmax(int a[],int n) {
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max =a[i];
		}
	}
	return max;
}

int demlonnhat (int a[],int n){
	int d;
	int ln=timmax(a,n);
	for(int i=0;i<n;i++){
	if(a[i] == ln){
		d++;
	}}
	return d;
}

int tongcacsochan (int a[], int n){
	int t=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			t=t+a[i];
		}
	}
	return t;
}


int main(){
	
	int n;
	nhapn(n);
	int a[n];
	nhapmang(a,n);  printf("\n mang vua nhap");
	xuatmang(a,n);
	int s =tinhtong(a,n); printf("\n tinh tong:%d",s);
	soamdautien(a,n); 
	sochandautien(a,n);
	lecuoicung(a,n);
	int dem= sophantuchan(a,n); printf("\n so phan tu chan: %d",dem);
	int max= timmax(a,n); printf(" \n max: %d",max);
	int d= demlonnhat(a,n); printf("\n dem lon nhat:%d",d);
	int t= tongcacsochan(a,n); printf("\n tong cac so chan la: %d",t);
	return 0;
}
