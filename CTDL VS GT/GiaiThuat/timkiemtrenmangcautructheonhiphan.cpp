#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct sach{
	int ma;
	char ten[30];
	float gia;
};
void nhapsach(sach a[],int n);
void xuatsach(sach a[],int n);
sach*timsach(sach a[],int n,float giatim);
//void allsach(a,n);
//void xuatallsach(a,n);

int main(int agrc, char**argv){
	int n;
	cout<<" nhap so luong sach: ";
	cin>>n;
	sach a[n];
	nhapsach(a,n);
	cout<<" --------Danh sach sach-------- "<<endl;
	xuatsach(a,n);
	float giatim;
	cout<<" Gia muon tim: "<<endl;
	cin>>giatim;
	sach*ap=timsach(a,n,giatim);
	if(ap==NULL){
		cout<<"ko tim thay ";
	}
	else{
		cout<<"ten: "<<ap->ten<<"\t"<<"gia : "<<ap->gia<<"\t"<<"Ma: "<<ap->ma<<endl;
	}

}

void nhapsach(sach a[],int n){
	for (int i=0;i<n;i++){
		cout<<"Nhap sach thu "<<i<<endl;
		
		cout<<" ma: \t ";
		cin>>(a[i].ma);
		cout<<" Ten: \t ";
		fflush(stdin);
		gets(a[i].ten);
		fflush(stdin);
		cout<<"gia: \t ";
		cin>>a[i].gia;
		
	}
}
void xuatsach(sach a[], int n){
	for(int i=0;i<n;i++){
		sach s=a[i];
		cout<<"ten sach: " <<s.ten<<"\t"<<"Ma sach: "<<s.ma<<"\t\t"<<"Gia: "<<s.gia<<endl;
	}
}
sach*timsach(sach a[],int n, float giatim){
	int left =0, right =n-1,mid =0;
	do{
		mid=(left+right)/2;
		sach ap=a[mid];
		if(ap.gia==giatim){
			return &ap;
		}
		else if(ap.gia>giatim){
			right=mid -1;
		}
		else{
			left=mid+1;
		}
	}while(left<=right);
	return NULL;
}










