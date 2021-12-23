// kieu du lieu chuan: int, float
// kieu duoc dinh nghia : typedef,enum,struct,union
// doi tuong kieu du lieu: bien , mang, cau truc...(ten cua vung nho du lieu)
////////////////// double x[]={ 23.4,66,77,7};
            /////  int n=sizeof(x)/sizeof(double); Toan tu sizeof: sizeof(kieu du lieu)
                                                //                 sizeof(doi tuong du lieu)
#include<conio.h>
#include<stdio.h>
int main(){
	double x[]={ 23.4,66,77.7};
    int n=sizeof(x)/sizeof(double);
    printf("%d",n);
}
