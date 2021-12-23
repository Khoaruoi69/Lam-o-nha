#include<iostream>
using namespace std;
int tong(int n){
	if(n>0){
		return n+tong(n-1);
	}
}

int main( int argc, char**argv){
	int n;
	cout<<"nhap n:"<< endl;
	cin>>n;
	int S=tong(n);
	cout<< "ket qua=" << S;
	return 0;
}
