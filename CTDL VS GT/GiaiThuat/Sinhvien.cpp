#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
struct sinhvien{
	char ma[10];
	char ten[190];
	float DTB;
};
typedef struct sinhvien sv;


struct node{
	sv data;
	struct node*pNext;
};
typedef struct node NODE;
struct list{
	NODE*pHead;
	NODE*pTail;
};
typedef struct list LIST;
void KhoiTaoDSLK(LIST&l){
	l.pHead=l.pTail=NULL;
}
NODE*KhoiTaoNode(sv x){
	NODE*p=new NODE;
	if(p==NULL){
		cout<<"\nKo du bo nho cap phat";
		return NULL;
	}
	p->data=x;
	p->pNext=NULL;
	return p;
}
void nhap(sv&x){
	    fflush(stdin);
		cout<<"\nnhap ma: "<<endl;
	    gets(x.ma);
	    fflush(stdin);
	    cout<<"\nnhap ten: "<<endl;
	    gets(x.ten);
	    fflush(stdin);
	    cout<<"\nNhap DTB: "<<endl;
	    cin>>x.DTB;
	    cout<<"\n____________________"<<endl;
	}
void ThemDau(LIST&l,NODE*p){
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		p->pNext=l.pHead;
		l.pHead=p;
	}
}
void ThemCuoi(LIST&l,NODE*p){
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		l.pTail->pNext=p;
		l.pTail=p;
	}
}
void NhapLIST(LIST&l){
	sv x;
	cout<<"\nNhap bat ki de tiep tuc"<<endl;
	cout<<"\nNhap 0 de stop"<<endl;
	char kt;
	do{
		    kt=getch();
		    if(kt=='0') break;
			nhap(x);
			NODE*p=KhoiTaoNode(x);
			ThemCuoi(l,p);
	
	}while(1);
	
}
void xuat(sv&x){
		cout<<"\tMA: "<< x.ma<<"\t"<<"\tTen: "<<x.ten<<"\t"<<"\tDiem: "<<x.DTB<<"\t"<<endl;
}
void XemLIST(LIST l){
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		xuat(k->data);
	//	cout<<k->pNext<<"  ";
	}
}
/*void timkiem(LIST&l){
	char b[10];
	cout<<"\nNhap mssv can tim:  ";
	fflush(stdin);
	gets(b);
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if(strcmp(b,k->data.ma)==0){
		cout<<k->data;
	}
}
}*/
void XoaMa(LIST&l){
//	NODE*p=l.pHead;
//	NODE*q=q->data;
	char a[10];
	cout<<"\nNhap mssv can xoa:  ";
	fflush(stdin);
	gets(a);
	if(strcmp(a,l.pHead->data.ma)==0){
		if(l.pHead==NULL){
			return;
		}
		NODE*p=l.pHead;
		l.pHead=l.pHead->pNext;
		delete p;
	}
	else if(strcmp(a,l.pTail->data.ma)==0){
		if(l.pHead==NULL){
		return ;
	} 
	else{
		for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
			if(strcmp(a,l.pTail->data.ma)==0){
				delete l.pTail;
				k->pNext=NULL;
				l.pTail=k;
			}
		}
	}
}
    
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		NODE*h=new NODE;
		if(strcmp(a,k->data.ma)==0){
			h=k->pNext;
			k->pNext=h->pNext;
			delete k;
			break;
		}
		h=k;
	}
//	cout<<"ko co sinh vien do"<<endl;
}
/*	while(p!=NULL){
		if(a==p->data.ma){
			break;
		}
		else{
			cout<<"\nKo co sv can  xoa"<<endl;
		}
			q=p;
			p=p->pNext;
	}
		if(q!=NULL){
			if(p!=NULL){
				q->pNext=p->pNext;
				delete (p);
				if(p==l.pTail){
					l.pTail=q;
					delete (p);
				}
			}
		}
		else{
			l.pHead=p->pNext;
			delete(p);
			if(l.pHead==NULL){
				l.pTail=NULL;
			}
		}
	}

*/
int main(int agrc, char**argv){
	LIST l;
	KhoiTaoDSLK(l);
	NhapLIST(l);
	cout<<"\n\t________ DANH SACH LIEN KET LA________"<<endl;;
	XemLIST(l);
	XoaMa(l);
	cout<<"_______________da xoa_________________"<<endl;
	XemLIST(l);
	return 0;
}
	



















