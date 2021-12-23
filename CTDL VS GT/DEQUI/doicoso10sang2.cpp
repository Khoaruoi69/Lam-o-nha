#include<iostream>
using namespace std;
void T10to2(int n){
	if(n>0){
		int sd=n%2;
		n=n/2;
		T10to2(n);
		cout<<sd;
	}
}
int main(int argc, char**argv){
	int n;
	cout<< " nhap so can doi : "<< endl;
	cin>> n;
	cout<<""<<n<<" doi sang binary: ";
	T10to2(n);
	return 0;
}
