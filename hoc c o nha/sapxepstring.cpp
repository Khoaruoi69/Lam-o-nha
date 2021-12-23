#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i, n=0;
	int item;
	char x[10][12];
	char temp[12];
	printf("Enter each string on a separate line\n\n"); // separate line: tung dong rieng biet.
	printf("Type 'END' when over \n\n"); // go " end" khi ket thuc.
	
	// read in the list of strings 
	do{
		printf("String %d: ", n+1);
		scanf("%s",x[n]);
	}while(strcmp(x[n++],"END"));
	// reorder the list of strings : sap xep lai .....
	n=n-1;
	for(item=0;item<n-1;++item){
		// find lowest for remaining strings: tim muc thap nhat cho cac chuoi con lai...
		for(i=item+1;i<n;++i){
			if(strcmp(x[item],x[i])>0){
			// interchange two string 
			strcpy(temp, x[item]);
			strcpy(x[item], x[i]);
			strcpy(x[i], temp);
			}
	     }
	}
	// display the arranged list of strings
	printf("Recorded list of strings: \n");
	for(i=0;i<n;++i){
		printf("\nString %d is %s ",i+1,x[i]);
	}
}














