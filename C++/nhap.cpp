#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*pNext;
};
typedef struct node NODE;
struct list{
	NODE*pHead;
	NODE*pTail;
};
typedef struct list LIST;
void KhoiTaoDSLK(LIST &l){
	l.pHead=NULL;
	l.pTail=NULL;
}
NODE*KhoiTaoNode(int x){
	NODE*p=new NODE;
	if(p==NULL){
		cout<<"ko du bo nho cap phat ";
		return NULL;
	}
	p->data=x;
	p->pNext=NULL;
	return p;
}
void ThemVaoDau(LIST&l,NODE*p){
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		p->pNext=l.pHead;
		l.pHead=p;
	}
}
void ThemVaoCuoi(LIST&l,NODE*p){
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		l.pTail->pNext=p;
		l.pTail=p;
	}
}
void Nhap(LIST&l){
	int n;
	cout<<"nhap so luong node can them: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"\nNhap gia tri so nguyen: ";
		cin>>x;
		NODE*p=KhoiTaoNode(x);
		ThemVaoCuoi(l,p);
	}
}
void Xuat(LIST l){
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		cout<<k->data<<" ";
	}
}
void ThemSau(LIST&l,NODE*p){
	int x;
	cout<<"\nNhap gia tri node q: ";
	cin>>x;
	NODE*q=KhoiTaoNode(x);
	if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
		ThemVaoCuoi(l,p);
	}
	else{
		for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
			if(q->data==k->data){
				NODE*h=KhoiTaoNode(p->data);
				NODE*g=k->pNext;
				h->pNext=g;
				k->pNext=h;
			}
		}
	}
}
void XuatThemSau(LIST l){
	int t;
	cout<<"\nNhap gia tri node p muon them sau node q: ";
	cin>>t;
	NODE*p=KhoiTaoNode(t);
	ThemSau(l,p);
	cout<<"\n\t --------DSLK them sau _____________"<<endl;
	Xuat(l);
}
void ThemDau(LIST&l,NODE*p){
	int x;
	cout<<"Nhap gia tri node q: ";
	cin>>x;
	NODE*q=KhoiTaoNode(x);
	if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
		ThemVaoDau(l,p);
	}
	else{
		NODE*g=new NODE;
		for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
			if(q->data==k->data){
				NODE*h=KhoiTaoNode(p->data);
				NODE*g=k->pNext;
				h->pNext=g;
				k->pNext=h;
			}
			g=k;
		}
	}
}
void XuatThemDau(LIST l){
	int s;
	cout<<"\nnhap gia tri node p muon  them vao truoc node q: "<<endl;
	cin>>s;
	NODE*p=KhoiTaoNode(s);
	ThemDau(l,p);
	cout<<"_______________dslk themdau___________________"<<endl;
	Xuat(l);
}
void XoaDau(LIST&l){
	if(l.pHead==NULL){
		return ;
	}
	NODE*p=l.pHead;
	l.pHead=l.pHead->pNext;
	delete p;
}
void XoaCuoi(LIST&l){
	if(l.pHead==NULL){
		return;
	}
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		delete l.pTail;
		k->pNext=NULL;
		l.pTail=k;
	}
}
void XoaSau(LIST&l,NODE*q){
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if(k->data==q->data){
			NODE*g=k->pNext;
			k->pNext=g->pNext;
			delete g;
			return;
		}
	}
}
void XoaBatKi(LIST&l){
	int x;
	cout<<"\nnhap gia tri node muon xoa: "<<endl;
	cin>>x;
	if(l.pHead->data==x){
		XoaDau(l);
		return;
	}
	if(l.pTail->data==x){
		XoaCuoi(l);
		return;
	}
	NODE*g=new NODE;
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if(k->data==x){
			g->pNext = k->pNext;
			delete k;
			return;
		}
		g=k;
	}
}

int main(){
	LIST l;
	KhoiTaoDSLK(l);
	Nhap(l);
	cout<<"\n\t --------DSLK_____________"<<endl;
	Xuat(l);
	XuatThemSau(l);
	XuatThemDau(l);
	XoaBatKi(l);
	cout<<"\n\t --------DSLK da xoa_____________"<<endl;
	Xuat(l);
	
}































































