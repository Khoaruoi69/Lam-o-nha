#include<conio.h>
#include<stdio.h>
float x[]= { 90.0 , 23.4, 12.2, 56.5,12.3 };
int n = sizeof(x)/sizeof(float ); // xac dinh so phan tu cua mang co che dau 
 main(){
	int i,j;
	float c;
	for( i=0,j=n-1;i<j;c=x[i],x[i]=x[j],x[j]=c,++i,--j){
		// than for la cau lenh rong
}
    fprintf(stdout," day ket qua\n\n");
	for(i=0;i<n;++i){
		fprintf(stdout,"%8.2f",x[i]);
	}
}
