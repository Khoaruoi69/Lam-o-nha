#include<iostream>
using namespace std;
/////////////////


// IsEmpty: kiem tra stack ton tai hay ko 
// Push: them mot doi tuong vao stack theo co che LIFO;
// Pop: lay phan tu dau stack va tra ve gia tri cua doi tuong dau stack va dong thoi huy no;
// Top: Xem thong tin cua stack dau danh sach va khong huy no di;


// nhap danh sách stack chua cac so nguyen, sau do xuat ra mang hinh cac gia tri so nguyen do

// khai bao cau truc cua 1 cai node
struct node{
	int data;
    struct node*pNext;
};
typedef	struct node NODE;

// khai bao cau truc stack
struct stack{
	NODE*pTop;
};
typedef struct stack STACK;

// ham khoi tao stack;
void KhoiTaoStack(STACK&s){
	s.pTop=NULL;
}

// khoi tao node
NODE*KhoiTaoNode(int x){
	NODE*p=new NODE;
	if(p==NULL){
		cout<<"\n ko du bo nho cap phat";
		return NULL;
	}
	p->data=x;
	p->pNext=NULL;
	return p;
}

///+++++++++++ Kiem tra stack co rong hay khong++++++++++
bool IsEmpty(STACK&s){
	// neu danh sach rong
	if(s.pTop==NULL){
		return true;
	}
	return false; // danh sách co phan tu
}

//+++++++++them 1 phan tu++++++++++++++
bool Push(STACK&s,NODE*p){
	if(p==NULL){
		return false;
	}
	if(IsEmpty(s)==true){
		s.pTop=p;// node p chinh la node dau cua stack;
	}
	else{
		// danh sach da co phan tu
		p->pNext=s.pTop;// tao lien ket 
		s.pTop=p;// cap nhap lai stop ... node dau
	}
	return true;
}

////++++++++++lay phan tu dau va xoa no di +++++++++
bool Pop(STACK&s,int&x){// x chinh la phan tu can lay trong node
        cout<<"\n\t Nhap x muon xem va xoa no di: ";
        cin>>x;
        if(IsEmpty(s)==true){
        	return false;
		}
		else{
			NODE*p=s.pTop;//node the mang, de ty xoa no di 
			x=p->data;// gan gia tri dau stack vao bien x;
			s.pTop=s.pTop->pNext;
			delete p;
		}
	return true;
	cout<<"\n\t"<<x<<"";
}

//++++++++++++++lay phan tu dau va ko xoa no di+++++++++++
bool Top (STACK&s,int &x){ // x chinh la phan tu lay ra de xem
     cout<<"\n\t Nhap x muon lay ra: ";
     cin>>x;
    if(IsEmpty(s)==true){
    	return true;
	}
	else{
		x=s.pTop->data; // lay thong tin phan tu dau stack de xem
	}
	return true;
}
void input(STACK&s){
	
	int chon;
	while(true){
		system("cls");
		cout<<"\n\t 1: Nhap phan tu can them: ";
		cout<<"\n\t 0: thoat";
		cout<<"\n\t chon: ";
		cin>>chon;
		if(chon==1){
			int x;
			cin>>x;
			NODE*p=KhoiTaoNode(x);
			Push(s,p);
		}
		if(chon==0){
			break;
		}
	}
}
void output(STACK&s){
	while(IsEmpty(s)==false){
		int x;
		Pop(s,x);
		cout<< x <<endl;
	}
}

int main(){
	STACK s;
	int x;
	KhoiTaoStack(s);
	input(s);
	cout<<"\n\t DANH SACH STACK: "<<endl;
	output(s);
	cout<<"\n\t POP:  ";
	Pop(s,x);
	output(s);
	cout<<"\n\t TOP: ";
	Top(s,x);
	
}







































