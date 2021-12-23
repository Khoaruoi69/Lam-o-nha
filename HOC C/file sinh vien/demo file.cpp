#include<stdio.h>
#include<conio.h>
int main(){
	FILE*t;
	t=fopen("E:\lamonha\NHAP DAnh sach sinh vien.exe","w+");
	if(t!=NULL){
		fprintf("hoc ngu thi chet");
}
	fclose(t);
	return 0;
}
