#include<iostream>
using namespace std;
typedef struct tagnode 
{
	int data;
	struct tagnode *pleft;// nhánh bên trái
	struct tagnode *pright;//nhánh bên ph?i
}tNode;

typedef struct tagtree
{ 
	tNode *root;
}TREE;// khai báo 1 cáy (TREE) có ki?u d? li?u là tNode

void init(TREE &t)
{
	t.root=NULL;
} // kh?i t?o cây NULL

tNode *Createnode(int data)
{
	tNode *p;
	p=new tNode;
	if(p!=NULL)
	{	
		p->data=data;
		p->pleft=NULL;
		p->pright=NULL;
	}
	return p;
}// hàm t?o 1 node

void insert(tNode *&r,int data)
{

	if(r==NULL)
		r=Createnode(data);
	else
		if(r->data>data)
			insert(r->pleft,data);
		else
			insert(r->pright,data);
}// thêm 1 node vào cây, n?u nh? hon thì bên trái, l?n hon thì bên ph?i, d? li?u là s? nguyên data

void insert1(TREE &t,int data)
{
	insert(t.root,data);
}

void print(tNode *r)
{
	if(r==NULL)
		return;
	
	print(r->pleft);
	printf("%4d",r->data);
	print(r->pright);
}// hàm in danh sách cây

void print(TREE t)
{
	print(t.root);
}// in c? cây nh? phân
void timthemang(tNode *&p,tNode *&q)
{
	if(q->pleft!=NULL)
		timthemang(p,q->pleft);
	else
	{
		p->data=q->data;
		
		p=q;
		q=q->pright;
	}
}// hàm tìm 1 node trên cây

int del(tNode *&p,int data)
{
	if(p==NULL)
		return 0;
	if(p->data>data)
		del(p->pleft,data);
	if(p-> datapright,data);
	if(p->data==data)
	{
		tNode *p1=p;
		if(p->pleft==NULL)
			p=p->pright;
		else
			if(p->pright==NULL)
				p=p->pleft;
			else
			{
		tNode *q=p->pright;
		timthemang(p1,q);
			}
			delete p1;
	}
	return 0;
}// hàm xóa 1 node trên cây

void demnode(tNode *p,int &dem)
{
	
	if(p==NULL)
		return ;
	demnode(p->pleft,dem);
	dem++;
	demnode(p->pright,dem);
	
		
}// hàm d?m node trên cây, v?i bi?n dem là tham bi?n

int demnode1(tNode *t)
{
	if(t==NULL)
		return 0;
	int x=demnode1(t->pleft);
	int y=demnode1(t->pright);
	/* if(r->pleft==NULL&&r->pright==NULL)
	return 1;
	return(x+y);
	*/
	return x+y+1;
}//hàm d?m node trên cây, v?i kêt qu? tr? v? là s? lu?ng node trên cây

void demla(tNode *t,int &dem)
{
	if(t==NULL)
		return;
	if(t->pleft==NULL)
		if(t->pright==NULL)
			dem++;

	demla(t->pleft,dem);
	
	demla(t->pright,dem);
	
	
}// d?m nút là, và nút cu?i cùng ? các nhánh

void docaonode(tNode *t,int data,int &dem)
{
	if(t->data>data)
	{   
		docaonode(t->pleft,data,dem);
		
	}
	else
		if(t->datapright,data,dem);
			
		}
		else
		{
			
			return;
		}
			dem++;
}// hàm d?m d? cao c?a cây, t?c là nhánh có nhi?u nút nh?t

//tim kiem
tNode* timnode(tNode *t,int data)
{
	if(t)
	{
		if(t->data==data)
			return t;
		if(t->data>data)
			return timnode(t->pleft,data);
		else
			return timnode(t->pright,data);
	}
	return NULL;

}// hàm tìm ki?m 1 data cho tru?c, kêt qu? null là không tìm th?y, ngu?c l?i s? tr? v? node dó

int tinhchieucaonut(tNode *r)
{
	if(r==NULL)
		return 0;
	if(r->pleft==NULL&&r->pright==NULL)
		return 0;
	int h1=tinhchieucaonut(r->pleft);
	int h2=tinhchieucaonut(r->pright);
	return 1+(h1>h2?h1:h2);
}// tính chi?u cao c?a cây

// hàm chính d? g?i các hàm c?n ch?y
void main()
{

	TREE t;
	init(t);
	int n,data,dem=0;
	printf("nhap so luong");
	scanf("%d",&n);
	for(int i=0;iscanf("%d",&data);
		insert1(t,data);
	}
	printf("Cay :");
	print(t);
	//printf("Nhap phan tu can xoa");
	//scanf("%d",&data);
	//del(t.root,data);
	//*print*/print(t);
	demnode(t.root,dem);
	//dem=demnode1(t.root);
	printf("\nco tat ca co: %d",dem);
	dem=0;
	demla(t.root,dem);
	
	printf("\nnut la %d",dem);
	dem=0;
	printf("\nNhap phan tu can dem do cao");
	scanf("%d",&data); 
	docaonode(t.root,data,dem);
	printf("\ndo cao cua %d la%d",data,dem);
	dem=0;
	//docaocay(t.root,dem);
	dem=tinhchieucaonut(t.root);
	printf("\ndo cao cay %d",dem);
	
	
}
