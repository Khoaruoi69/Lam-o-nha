/* phan tu am dau tien cua ma tran*/
// dung goto.
#include<stdio.h>
void nhapdong(int&d){
	printf("\n nhap so dong: ");
	scanf("%d",&d);
}
void nhapcot(int&c){
	printf("\nnhap so cot: ");
	scanf("%d",&c);
}
void nhapmatran(int a[][100],int c, int d){
	for(int i=0;i<d;++i){
		for(int j=0;j<c;++j){
			printf("\nnhap a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmatran(int a[][100],int c,int d){
	for(int i=0;i<d;++i){
		for(int j=0;j<c;++j){
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
}	
main(){
	
	int i,j,c,d;
	int a[100][100];
	nhapdong(d);
	nhapcot(c);
	nhapmatran(a,c,d);
	xuatmatran(a,c,d);
	for(i=0;i<3;++i)
	for(j=0;j<4;++j)
	if(a[i][j]<0){
		goto tim_thay;
	}
	printf("\n ma tran ko co phan tu am");
	goto ket_thuc;
	tim_thay: 
	printf("\n phan tu am dau tien la a[%d][%d]=%4d",i,j,a[i][j]);
	ket_thuc: ;/* cau lenh rong*/
}
