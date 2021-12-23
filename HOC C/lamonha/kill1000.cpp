#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct{
	
	int Elements[1000000];
	int Last;
}List;

void deleteList(int p, List *L){
	int i;
	if(p<1 || p>L->Last){
	p = 1;
}
	for(i=p; i<L->Last; i++){
            L->Elements[i-1] = L->Elements[i];
           }	
             L->Last --;
}

void printList(List L){
        int i;
        for(i=0; i< L.Last; i++){
        printf("Nguoi song sot cuoi cung: %d ", L.Elements[i]);
}
}
void nhap(int n){
	cout<<"\nnhap so nguoi: "<<endl;
	cin>>n;
}

void kk(List L,int n){
	 L.Last = n;
	for(int i=0; i<L.Last; i++){
L.Elements[i] = i+1;
}
while(L.Last !=1){
	
for(int i=1; i<=L.Last; i++){
deleteList(i+1, &L);
}
}
printList(L);
}
int main(){
    List L;
    int n;
   // int n;
   // printf("Nhap so nguoi: ");
    //scanf("%d", &n);
    nhap(n);
    kk(L,n);
    printList(L);
    return 0;
}










