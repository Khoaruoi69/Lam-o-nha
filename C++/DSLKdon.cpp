#include<iostream>
using namespace std;
// tao node
struct Node{
	int data;
	Node*next;
};
Node*CreateNode(int init_data){
	Node*node=new Node;
	node->data=init_data;
	node->next=NULL;// node vua tao chua them vao DSLK
	return node;
}
// tao danh sach lien ket 
struct LinkedList{
	Node*head;
	Node*tail;
};
//vua tao chua tro vao ai nen gan bang NULL
void CreateList(LinkedList&l){
	l.head=NULL;
	l.tail=NULL;
}
//tao mot danh sach 
LinkedList list;
CreateList (list);// gan head va tail bang NULL
void PrintList(LinkedList l){
	if(l.head!=NULL){
		Node*node=l.head;
		while(node!=NULL){
			cout<<node->data<<" ";
			node=node->next;// chuyen sang node tiep thep
		}
	}
}
int main(int argc, char**argv){
	PrintList(list);
}


















