#include<stdio.h>
#include<conio.h>
int main(){
	FILE*t;
	t=fopen("Documents:\t.dox","r+");
	if(t!=NULL){
		fscanf(t,"%s");
}
	fclose(t);
	return 0;
}
