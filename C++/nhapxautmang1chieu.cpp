#include<iostream>
using namespace std;
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<" nhap a["<<i<<"]:";
		cin>>a[i];
	}
}
void xuatmang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(int argc,char**argv){
	int n;
	int a[100];
	cout<<" nhap n: "<<endl;
	cin>>n;
	nhapmang(a,n);
	cout<<" xuat mang: "<<endl;
	xuatmang(a,n);
	return 0;
}
