#include<stdio.h>
#include<conio.h>

struct phanso{
	int tu;
	int mau;
};
typedef struct phanso Ps;
// viet ham nhap vao phan so
void nhapphanso(Ps &  x){
	printf("nhap tu:"); 
	scanf("%d",&x.tu);
	printf("nhap mau:"); 
	scanf("%d",&x.mau);
}
void xuatphanso(Ps & x){
	printf("phan so:%d/%d",x.tu,x.mau);
}
void nhapsophantu(int& n)
{
		printf("\nNhap so phan tu:");
		scanf("%d",&n);
	}
void nhapmangps( Ps a[],int n){
	for(int i=0; i<n; i++){
		printf("\nnhap tu %d:",i); 
	    scanf("%d",&a[i].tu);
	    printf("\nnhap mau %d:",i); 
	    scanf("%d",&a[i].mau);
		printf("\n%d/%d",a[i].tu,a[i].mau);
	}
}
void xuatphanso (Ps a[],int n){
	for(int i=0;i<n;i++)
	printf("\n%d/%d",a[i].tu,a[i].mau);
}
void tongphanso(Ps a[],int n){
	Ps z;
	int m,t,d,b,r,k;
	int tt=1,mm=1;
	for(int i=0;i<n;i=i+2){
		m= a[i].mau*a[i+1].mau;
		t= a[i].tu*a[i+1].mau+a[i+1].tu*a[i].mau;
     	if(i==0){
     		d=m; b=t;
		 }
     	if(i>1){
	     z.tu=(b*m+d*t);
	     z.mau=d*m; 
	}
}
    printf("\n tong day so: %d/%d", z.tu,z.mau);
}











int main(){
	Ps x;
	Ps a[100];
	int n;
	nhapphanso(x);
	xuatphanso(x);
	nhapsophantu(n);
	nhapmangps( a,n); printf("\nday so phan so la:");
	xuatphanso(a,n);
	tongphanso(a,n);
}

