#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapn(int&n){
	printf("nhap n:");scanf("%d",&n);
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\nNhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	for(int i=0; i<n;i++){
	   printf("%4d",a[i]);
    }  
}  
   int dem;
   for(int i=0;i<n;i++)
   {

  if (n-a[i]==2|| a[i]-n==2)
  {
          dem ++;
            }
    }
    int demk;
    for(int i=0;i<6;i++){
        if(k-a[i]==2||a[i]-k==2){
            demk++;
        }
    }
    int s=dem+demk;
    printf("%d",s);

int main() {
   /* int l,k;
    printf("nhap l,k:");
    scanf("%d%d",&l,&k);*/
    int a[100],n;
    nhapmang(a,n);
    xuatmang(a,n);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
