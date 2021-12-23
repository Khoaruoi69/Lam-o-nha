#include<stdio.h>
#include<conio.h>
void xuatmenu(){
	printf("1: Tinh tong mang");
	printf("2: Tim vi tri so lon nhat trong mang");
	printf("3: Tim so nguyen to trong mang");
	printf("4: tinh tong cac so nguyen to trong mang");
	printf("5: Tim so hoan thien trong mang");
	printf("6: xuat ra cac uoc chung tu 1 den n");
	printf("7: dem cac so le trong mang:");
}
void nhapn (int &n){
	printf("\nnhap so phan tu n: "); scanf("%d",&n);
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
int main(){
	int n,a[100];
	nhapn(n);
/*	nhapmang(a,n);
	xuatmang(a,n);*/
	int chon;
	do{
		printf("\n\tchon cong viec muon thuc hien: ");
		scanf("%d",&chon);
		if(chon<0||chon>7){
			printf("\nnhap sai nhap lai:");
		}
	} while (chon<0||chon>7);

		switch (chon){
			case 1:{
				nhapmang(a,n);
				xuatmang(a,n);
				long s=0;
				for(int i=0;i<n;i++){
					s=s+a[i];
				}
				printf("\n Tong mang la: %ld",s);
					break;
				}
			
			case 2:{
				nhapmang(a,n);
				xuatmang(a,n);
				int c;
				int max=a[0];
				for(int i=0;i<n;i++){
					if(max<a[i]){
						max=a[i];
						c=i;
					}
				} 
					printf("\nvi tri phan tu lon nhat la: %d",c);
					break;
			}
		}

	return 0;	
}






