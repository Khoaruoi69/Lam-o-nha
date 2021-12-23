#include<iostream>
using namespace std;
void print_array(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<< arr[i] <<"\t";
	}
	cout<<endl;
}
void print_permulations(int arr[],int n,int i){
	int j, swap;
	print_array(arr,n);
	for(j=i+1;j<n;j++){
		if(arr[j]>arr[i]){
			swap=arr[j];
			arr[j]=arr[i];
			arr[i]=swap;
		}
		print_permulations(arr,n,i+1);
	}
}
int main(int argc, char**argv){
	int M[3];
	M[0]=10;
	M[1]=2;
	M[2]=5;
	print_permulations(M,3,0);
	return 0;
}
