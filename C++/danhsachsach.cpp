#include<iostream>
using namespace std;
struct sach{
	char ten[10];
	float gia;
	int ma;
};
void nhapsach(sach s[], int n){
	for(int i=0;i<n;i++){
		cout<<"cuon thu "<<i<<""<<endl;
		fflush(stdin);
		cout<<" Ten sach : "<<endl; gets(s[i].ten);
		fflush(stdin);
		cout<<"gia: "<<endl; cin>>s[i].gia;
		fflush(stdin);
		cout<<"ma: "<<endl; cin>>s[i].ma;
	}
}
void xuatsach(sach s[], int n){
	for(int i=0;i<n;i++){
		sach u=s[i];
		cout<<"\t"<<" ten sach: "<<u.ten<<"\t"<<"giá: "<<u.gia<<"\t"<<"Ma: "<<u.ma<<endl;
	}
}
int main(int argc, char**argv){
	int n;
	cout<<" nhap n: "<<endl; 
	cin>>n;
	sach s[n];
	nhapsach(s,n);
	cout<<"----------- danh sach--------"<<endl;
	xuatsach(s,n);
	
}











