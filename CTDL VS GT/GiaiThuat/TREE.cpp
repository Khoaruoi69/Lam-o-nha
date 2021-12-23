#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	int data;
	struct node*pLeft;
	struct node*pRight;
};
typedef struct node NODE;
typedef NODE*TREE;
// khoi tao cay 
void KhoiTaoCay(TREE&t){
	t=NULL;
}
// hàm them phan ru vao x vao cay nhi phan
void ThemNodeVaoCay(TREE&t,int x){
	if(t==NULL){
	NODE*p =new NODE;
	p->data =x;
	p->pLeft=NULL;
	p->pRight=NULL;
	t=p;// node chinh la node goc-> x chinh la node goc
}
    else{
    	if(t->data<x){
    		ThemNodeVaoCay(t->pLeft,x);
		}
		else if(t->data>x){
			ThemNodeVaoCay(t->pRight,x);
			
		}
	}
}
void Duyet_NLR (TREE&t){
			//duyet cay cho den het 
			if(t!=NULL){
				cout<<t->data<<" "; // xuat du lieu trong node
				Duyet_NLR(t->pLeft);
				Duyet_NLR(t->pRight);
			}
		}
		
void Menu(TREE&t){
	while(true){
		system("cls");
		cout<<"_____________menu______________"<<endl;
		cout<<"1: nhap du lieu"<<endl;
		cout<<"2: xuat du lieu "<<endl;
		cout<<"0: thoat"<<endl;
	int chon;
	cout<<"hay chon"<<endl;
	cin>>chon;
	if(chon ==1 ){
		int x;
		cout<<"\nhay nhap phan tu can them: "<<endl;
		cin>>x;
		ThemNodeVaoCay(t,x);
	}
	else if(chon==2){
		cout<<"\n\t Duyet cay NLR:  "<<endl;
		Duyet_NLR(t);
		system("pause");
	}
	else{
		break;
	}
}
}
int main(){
	
	TREE t;
	KhoiTaoCay(t);
	Menu(t);
	system("pause");
}























