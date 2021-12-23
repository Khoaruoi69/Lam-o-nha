#include<stdio.h>
#include<conio.h>
void nhapn(int &n){
	do{
	printf("nhap n:"); scanf("%d",&n);
	if(n<0){
		printf("nhap sai nhap lai");
	}
    }while(n<0);
}
void nhapmang(int a[],int n){
	if(n==0) return;
	if(n>0){
	nhapmang(a,n-1);
	printf("\n\tnhap a[%d]=",n-1);
	scanf("%d",&a[n-1]);
    }
}
void xuatmang(int a[],int n){

	if(n>0){
	xuatmang(a,n-1);
	printf("%d\t",a[n-1]);
    }
}
long tongchan(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		long s=tongchan(a,n-1);
		if(a[n-1]%2==0){
			return s+a[n-1];
		}
		return s;
	}
}
int ktnt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	else{
		for(int i=0;i<n;i++){
			if(n%i==0) return 0;
		}
			return 1;
	}

}
long tongngto(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		long k=tongngto(a,n-1);
		if(ktnt(a[n-1])==1)
		{
			return k+a[n-1];
		}
		return k;
	}
	
}
int demchan(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		int d= demchan(a,n-1);
		if(a[n-1]%2==0){
			return d+1;
		}
		return d;
	}
}
int chancuoi(int a[],int n){
	if(n==0) return 1;
	if(n>0){
		if(a[n-1]%2==0){
			return a[n-1];
		}
		int chc=chancuoi(a,n-1);
		return chc;
	}
}
long sum(int a[],int n){
	if(n==0) return 0;
	if(n>0){
		long t=sum(a,n-1);
		return t+a[n-1];
	}
}
int timmax(int a[],int n){
	if(n==0) return a[0];
	if(n>0){
		int max=timmax(a,n-1);
		if(max>a[n-1]){
			return max;
		}
		return a[n-1];
	}
}
/*int vitrimax(int a[],int n){
	if(n==0) return 1;
	if(n>0){
		if (timmax(a[n-1]==max)){
			return a[n-1];
		} 
		int vt=vitrimax(a,n);
		return vt;
	}
}


*/





int main(){
	int a[100],n;
	nhapn(n);
	nhapmang(a,n);	
	printf("\nmang da nhap la: ");
	xuatmang(a,n);
	long i=tongchan(a,n); 
	printf("\ntong cac phan tu chan la: %ld",i);
	long l=tongngto(a,n);
	printf("\nTong cac phan tu nguyen to la: %d ",l);
	int c=chancuoi(a,n);
	printf("\n Phan tu chan cuoi la: %d",c);
	int j=demchan(a,n);
	printf("\nso phan tu chan trong mang la: %d",j);
	int m=timmax(a,n);
	printf("\n phan tu lon nhat la: %d",m);
//	int o = vitrimax(a,n);
//	printf("vi tri max");
return 0;
}
