#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


/*void xuat(SingleList a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i].mang<<endl;
	}
}

*/


//struct SingleList{
//	Node*pHead;
//};
struct Node{
	int data;
	Node*pNext;
};
struct SingleList{
	Node*pHead;
};
void InitiaLize(SingleList&List){
	List.pHead = NULL;
}
// duyet danh sach lien ket 
void PrintfList(SingleList List){
	Node*pTmp=List.pHead;
	if(pTmp==NULL){
		cout<<"The list is empty"<<endl;
	return;
    }
    while(pTmp!=NULL){
    	cout<<pTmp->data<<" ";
    	pTmp=pTmp->pNext;
    
	}
}
void input(SingleList&List){
	InitiaLize (List);
	int n,x;
	cout<<"Nhap so luong phan tu: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<" nhap pt "<<i<<": "<<endl;
		cin>>x;
		InsertFrist(List,x);
	}
}
// tao node
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


int main(int agrc, char**agrv){
//	int n;
	//SingleList a[n];
	SingleList List;
	InitiaLize(List);
//	cout<<"Nhap n: "<<endl;
//	cin>>n;
	//nhap(a,n);
//	cout<<"mang da nhap: "<<endl;
//	xuat(a,n);
//	InitiaLize(SingleList&List);
//	PrintfList(List);
	
}















