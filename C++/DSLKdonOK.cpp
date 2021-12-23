#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

struct Node
{
	int Data;
	struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
	NODE *pHead;
	NODE *pTail;
};
typedef struct List LIST;

void Init(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
//
NODE* GetNODE(int x) 
{
	NODE *p = new NODE;// cap phat bo nho con tro
	if(p == NULL)
	{
		return NULL;
	}
	p->Data = x; /// data = x
	p->pNext = NULL;/// con tro pNext=NULL
	return p;// return gia tri x
}

void AddHead(LIST &l,NODE *p)
{
	if(l.pHead == NULL) 
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		p ->pNext = l.pHead; 
		l.pHead = p; 		 
	}
}
void InPut(LIST &l,int n)
{
	Init(l); 
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"\nNhap vào data: "<<endl;
		cin>>x;
		NODE *p = GetNODE(x); 
		AddHead(l, p);
	}
}
void OutPut(LIST l)
{
	for(NODE *p = l.pHead; p != NULL; p = p ->pNext)
	{
		cout<<p ->Data<<endl;
	}
}
////////////////////////////
Node*CreatNode(int d){
	Node*pNode= new Node;
	if(pNode=NULL){
		pNode->data=d;
		pNode->pNext=NULL;
	}
	else{
		cout<<"Error allocated memory"<<endl;
	}
	return pNode;
}

int SizeOfList(SingleList List){
	Node*pTmp=List.pHead;
	int nSize=0;
	while(pTmp!=NULL){
		pTmp=pTmp->pNext;
		nSize++;
	}
	return nSize;
}
int main()
{
	LIST l;
	int n;
	cout<<"\nBan muon nhap bao nhiêu Node: "; 
	cin>>n;
	InPut(l,n);
	OutPut(l);
}
