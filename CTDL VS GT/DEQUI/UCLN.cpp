#include<iostream>
using namespace std;
int r;
int UCLN(int m ,int n){
	if(m<n) return UCLN(n,m);
	r=m%n;
	if(r==0) return n;
	else
	return UCLN(n,r);
}
int main (int argc, char**argv){
	int m,n;
	cout<<"nhap m: "<<endl;
	cin>> m;
	cout<<"nhap n: "<<endl;
	cin>> n;
	int kq=UCLN(m,n);
	cout<<"ket qua: "<<kq;
	return 0;
}
