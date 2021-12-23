#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void nhap(int M[], int n){
	srand( time (NULL));
	for(int i=0;i<n;i++){
		
		M[i]= rand()%100;
		
	}
}
void xuat(int M[],int n){
	for(int i=0;i<n;i++){
		cout<< M[i]<<"\t";
	}
}
int search(int M[],int n,int x){
	for(int i=0;i<n;i++){
		if(M[i]==x){
			return i;
		}
	}
	return -1;
}
int main(int agrc, char**argv ){
	int n=10;
	
	int M[n];
	nhap(M,n);
	cout<<" mang ngau nhien: \n";
	xuat(M,n);
	int x;
	cout<<"\n nhap x: "; cin>>x;
	int kq=search(M,n,x);
	if(kq==-1){
		cout<<" ko tim thay "<< x <<"  trong mang " ;
	}
	else{
		cout<<"tim thay "<<x<<" tai vi tri "<<kq;
	}
	return 0;
}
