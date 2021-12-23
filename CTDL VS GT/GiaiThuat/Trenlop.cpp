#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
void KhoiTao (LIST&l){
	l.pHead=NULL;
	l.pTail=NULL;
}
NODE *KhoiTaoNode(int x){
	NODE*p=new NODE;
	if (p==NULL){
		printf("Khong du bo nho");
		return NULL;
	}
	else
	{
		p->data=x;
		p->pNext=NULL;
		return p;
	}
}
void ThemVaoDau(LIST&l, NODE*p){
	if (l.pHead == NULL ){
		l.pHead=l.pTail=p;
	}
	else
	{
		p->pNext=l.pHead;
		l.pHead=p;
	}
}
void ThemVaoCuoi(LIST&l,NODE*p){
	if (l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		l.pTail->pNext=p;
		l.pTail=p;
	}
}
void XuatDanhSach(LIST l)
{
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext)
	{
		cout<<k->data<<endl;
	}
}
void nhapxuatDSLK(LIST&l)
{
	int n;
	cout<<"\nNhap so luong gia tri can them: "<<endl;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		int x;
		cout<<"\nNhap gia tri so nguyen: "<<endl;
		cin>>x;
		NODE*p=KhoiTaoNode(x);
		ThemVaoCuoi(l,p);
	}
}
void ThemSau(LIST&l,NODE*p)
{
	int x;
	cout<<"\nNhap gia tri q:";
	cin>>x;
	NODE*q=KhoiTaoNode(x);
	if(q->data==l.pHead -> data && l.pHead -> pNext == NULL ){
		ThemVaoCuoi(l,p);
	}
	else
	{
		for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
			if (q->data==k->data){
				NODE*g=k->pNext;
				p->pNext=g;
				k->pNext=p;
			}
		}
	}
}
void SoNode(LIST l){
	int d;
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
		d++;
	}
	cout<<"So Node co trong DSLSK: "<<d<<"";
}
void XuatThemSau(LIST&l){
	int x;
	cout<<"\nNhap gia tri node p can them sau q:"<<endl;
	cin>>x;
	NODE*p=KhoiTaoNode(x);
	ThemSau(l,p);
}
int TimMax(LIST l)
{
	int max;
	max=l.pHead->data;
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext)
	{
		if (max<k -> data){
			max=k->data;
		}
	}
	return max;
}
void XoaDau(LIST&l){
	if (l.pHead==NULL){
		return;
	}
	NODE*p=l.pHead;
	l.pHead=p->pNext;
	delete p;
}
void XoaCuoi(LIST&l)
{
	if (l.pHead==NULL)
	{
		return;
	}
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if (k->pNext==l.pTail){
		k->pNext=NULL;
		l.pTail=k;
		}
	}

}
void XoaNodeBatKy(LIST&l,int x)
{
	if (l.pHead->data==x){
		XoaDau(l);
		return;
	}
	if (l.pTail->data==x){
		XoaCuoi(l);
		return;
	}
	NODE*g=new NODE;
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if(k->data==x)
		{
			g->pNext=k->pNext;
			delete k;
			return ;
		}
		g=k;
	}
}
void xoa(LIST l){
	int x;
	cout<<"\nNhap q muon xoa: "<<endl;
	cin>>x;
	XoaNodeBatKy(l,x);
}
void XuatVT(LIST l){
	int d;
	int o;
	cout<<"\nNhap vi tri muon tim: "<<endl;
	cin>>o;
	for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
		d++;
		if (o==d){
			cout<<"gia tri o vi tri"<< o << "la: "<<k->data;
			break;
		}
	}
}
void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
void sapxep(LIST & l){
	NODE*p=l.pHead;
	while(l.pHead!=NULL){
		for (NODE*k=l.pHead;k!=NULL;k=k->pNext){
			if (k->data < p->data){
				swap ( p->data, k->data);
			}	
		}
		l.pHead=l.pHead->pNext;
	}
	l.pHead=p;
}
int main(int argc, char** argv) {
	LIST l;
	KhoiTao(l);
	nhapxuatDSLK(l);
	cout<<"\n\n\t************DSLKD************"<<endl;
	XuatDanhSach(l);
	XuatThemSau(l);
	cout<<"\n\n\t************DSLKD da them ************"<<endl;
	XuatDanhSach(l);
	SoNode(l);
	int z=TimMax(l);
	cout<<"\n\tMAX"<<z<<"";
	xoa(l);
	cout<<"\n\n\t************DSLKD da xoa ************"<<endl;
	XuatDanhSach(l);
	XuatVT(l);
}
