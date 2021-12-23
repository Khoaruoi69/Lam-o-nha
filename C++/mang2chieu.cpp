#include<iostream>
using namespace std;
void nhap(int a[100][100], int c, int h){
	for(int i=0;i<c;i++){
		for(int j=0;j<h;j++){
			cout<<" nhap a["<<i<<"]["<< j<<"]";
			cin>> a[i][j];
		}
		//cout<<"\t";
	}
}
void xuat(int a[100][100],int c, int h){
	for(int i=0;i<c;i++){
		for(int j=0;j<h;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\t\n";
	}
}
int main(int argc, char**argv){
	int a[100][100];
	int c,h;
	cout<<"nhap hang: "<<endl;
	cin>>h;
	cout<<" nhap cot: "<<endl;
	cin>>c;
	nhap(a,c,h);
	cout<< " xuat mang: "<< endl;
	xuat(a,c,h);
}
