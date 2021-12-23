#include<iostream>
using namespace std;
int TongLienTiep(int n){
	if(n>0){
		return n%10 + TongLienTiep(n/10);
	}
}
int main ( int argc, char ** argv){
	int n;
	cout<<"nhap n: "<<endl;
	cin>> n;
	int kp=TongLienTiep(n);
	cout<<"ket qua : "<< kp;
	return 0;
}
