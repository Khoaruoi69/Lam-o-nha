#include<iostream>
using namespace std;
int choose(int n,int k){
	if(k==0|| n==k){
		return 1;
	}
	else{
	return choose(n-1,k) + choose(n-1,k-1);
}
}
int main(int argc, char** argv){
	int n=5;
	int k=3;
	int kq=choose(n,k);
	cout<<kq;
	return kq;
}
