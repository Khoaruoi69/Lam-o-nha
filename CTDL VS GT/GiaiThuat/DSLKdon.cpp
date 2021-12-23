#include<iostream>
using namespace std;
//======= khai bao cau truc DSLKD=============

// khai bao cau truc mot cai node
struct node{
	int data;
	struct node*pNext;
};
typedef struct node NODE;
// khai bao cau truc ca lien ket don 
struct list{
	NODE*pHead;
	NODE*pTail;
};
typedef struct list LIST;
/// ===========khoi tao cau truc danh sach lien ket don cac so nguyen ////////////////
void KhoiTao(LIST&l){ // & l: tham chieu: luu su khoi tao
	l.pHead=NULL;
	l.pTail=NULL;
}
// ham khoi tao 1 cai node
NODE*KhoiTaoNODE(int x){
	NODE*p= new NODE;// cap phat vung nho cho NODE p
	if(p==NULL){
		cout<<"KO DU BO NHO DE CAP PHAT"<<endl;
		return NULL;
	} 
	p->data=x;// TRuyen gia tri x vao data
	p->pNext=NULL; // Dau tien khai bao thi node do chua co lien ket den node nao het nen => control no se tro den NULL;
	return p;
	
}
////////======= ham them node vao dau ============
void ThemVaoDau(LIST&l, NODE*p){
	// danh sach dang rong
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;// node dau cung chinh la node cuoi;
	}
	else{
		p->pNext=l.pHead;// control cua node can them la node p lien ket la node dau pHead
		l.pHead=p; // cap nhap lai pHead chinh la node p
	}
}
///////======= ha them voa cuoi======
void ThemVaoCuoi(LIST&l, NODE*p){
	if(l.pHead==NULL){
		l.pHead=l.pTail=p;
	}
	else{
		l.pTail->pNext=p;// con tro cua pTail
		l.pTail=p;// cap nhap lai pTail
	}
}
////// ham xuat danh sach LKD
void XuatDanhSach(LIST l){
	//for(int i=0;i<n;i++)
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		cout<<k->data<<endl;
	}
}
/// ham gia tri lon nhat 
int TimMax(LIST l){
	int max=l.pHead->data;// gia su node dau la max
	for(NODE*k=l.pHead;k!=NULL;k=k->pNext){
		if(max<k->data){
			max=k->data; // cap nhap lai max
		}
		return max;
	}
}
/*void MENU(LIST l){
	int chon;
	while(69){
	system("cls");
	cout<<"\n\n\t ++++++++ Menu++++++++"<<endl;
	cout<<"\t 1: Nhap DSLK "<<endl;
	cout<<"\t 2: Xuat DSLK"<<endl;
	cout<<"\t 3: Tim max"<<endl;
	cout<<"hay chon: ";
	cin>>chon;
	if(chon==1){
//	int n;
//	cout<<"\nNhap so luong node can them: ";
//	cin>>n;
//	for(int i=0;i<n;i++){
		int x;
		cout<<"\nNhap gia tri so nguyen: ";
		cin>>x;
		NODE*p=KhoiTaoNODE(x); // khoi tao 1 cai node so nguyen;
		ThemVaoDau(l,p);// them node p vao dau danh sach lien ket don
	}
	
//}
	if(chon==2){
	cout<<"\n\n\t DANH SACH LIEN KET DON: "<<endl;
	XuatDanhSach(l);
	system("pause");
	}
	
	else if(chon==3){
		int w=TimMax(l);
		cout<<"Max: "<<w<<"";
	}
	else{
		break;
	}
}
}
*/
int main(int argc,char**argv){
	LIST l;
	KhoiTao(l); // khoi tao dslkd
//	MENU(l);
    int n;
	cout<<"\nNhap so luong node can them: ";
	cin>>n;
	for(int i=0;i<n;i++){
	int x;
	cout<<"\nNhap gia tri so nguyen: ";
	cin>>x;
	NODE*p=KhoiTaoNODE(x); // khoi tao 1 cai node so nguyen;
	ThemVaoDau(l,p);// them node p vao dau danh sach lien ket don
}
    cout<<"\n\n\t DANH SACH LIEN KET DON: "<<endl;
	XuatDanhSach(l);
	system("pause");
	int w=TimMax(l);
	cout<<"Max: "<<w<<"";
	
	
	return 0;
}


































































