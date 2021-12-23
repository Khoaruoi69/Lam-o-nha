#include<stdio.h>
#include<conio.h>
int main(){

FILE *f;
f=fopen("demo.text","a+");
fputs("tien hoc le hau hoc van",f);
fclose(f);
return 0;
}
