#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void Merge(int a[],int left, int mid,int right);
void nhap(int a[], int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=(rand()%100);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void BubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void SelectionSort(int a[],int n){
	int min;
	for(int i=0;i<n-1;i++){
		min =i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min =j;
			}
			if(min!=i){
				int temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		}
	}
}
void InterchangeSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int temp = a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
void IntertionSort(int a[],int n){
	int pos=0;
	int x,i;
	for(int i=0;i<n;i++){
		x=a[i];
		for(pos=i;(pos>0)&&(a[pos-1])>x;pos--){
			a[pos]=a[pos-1];
		}
		a[pos]=x;
	}
}
void QuickSort(int a[], int left, int right){
	if(left>=right) return ;
	int pivot =a[(left+right)/2];
	int i=left,j=right;
	do{
		while (a[i]<pivot) i++;
		while (a[j]>pivot) j--;
		if(i<=j){
			int temp = a[i];
			a[i]= a[j];
			a[j]=temp;
			i++;
			j--;
		}
	} while (i<j);
	QuickSort(a,left,j);
	QuickSort(a,i,right); 
}
void MergeSort(int a[],int left, int right){
	
	if(left>=right) return;
	int mid =(left+right)/2;
	MergeSort(a,left,mid);
	MergeSort(a,right+1,right);
	Merge(a,left,mid,right);
}
void Merge(int a[], int left,int mid,int right){
	int ntemp =right - left+1;
	int temp[ntemp];
	int pos =0;
	int i=left;
	int j=mid + 1;
	while(!(i>mid&&j>right)){
		if((i<=mid&&j<=right&&a[i]<a[j])|| j>right){
			temp[pos ++]=a[i++];
		}
			else{
				temp[pos++]=a[j++];
			}
		}
			for(i =0;i<ntemp;i++){
				a[left+i]= temp[i];
			}
		}
int main(int agrc, char**argv){
	int n, a[n],left,right;
	cout<<"nhap n : "<<endl;
	cin>>n;
	nhap(a,n);
	cout<<"mang da nhap: "<<endl;
	xuat(a,n);
	int chon;
	do{
		cout<<"\n"<<" ...........Menu........."<<endl;
		cout<<" chon  1: De dung Bubble Sort "<<endl;
		cout<<" chon 2: De dung Selection Sort"<<endl;
		cout<<" chon 3: De dung Interchange Sort"<<endl;
		cout<<" chon 4: De dung Intertion Sort "<<endl;
		cout<<"chon 5: De dung QuickSort "<<endl;
		cout<<"chon 6: De dung MegerSort "<<endl;
		cout<<" chon 0: De thoat"<<endl;
		cout<<" hay chon: "<<endl;
		cin>>chon;
	switch(chon){
		case 1:{
			BubbleSort(a,n);
	cout<<"\n"<<" BubbleSort: "<<endl;
	xuat(a,n);
			break;
		}
		case 2:{
			SelectionSort(a,n);
	cout<<"\n"<<"SelectionSort: "<<endl;
	xuat(a,n);
			break;
		}
		
		case 3:{
			InterchangeSort(a,n);
			cout<<" InterchangeSort: "<<endl;
			xuat(a,n);
			break;
		}
		case 4:{
			IntertionSort(a,n);
			cout<<"Intertion Sort: "<<endl;
			xuat(a,n);
			break;
		}
		case 5:{
			QuickSort(a,0,n-1);
			cout<<"QuickSort: "<<endl;
			xuat(a,n);
			break;
		}
		case 6:{
			MergeSort(a,0,n-1);
			cout<<"MergeSort: "<<endl;
			xuat(a,n);
			break;
		}
	}
	}while(chon!=0);
	
	
	return 0;
}
