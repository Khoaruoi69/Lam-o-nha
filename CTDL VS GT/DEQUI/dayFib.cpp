#include<iostream>
// day fib: 1 1 2 3 5 8 13 21
using namespace std;
int fib(int n){
	if(n<2) return 1;
	return fib(n-1)+fib(n-2);
}
int main(int argc, char**argv){
	int n;
	cout<<" nhap n: "<<endl;
	cin>> n;
	int kq=fib(n);
	cout<<" ket qua: "<< kq;
	return 0;
}
