#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char Chuoi[255],*s;
    printf("Nhap chuoi: ");
    gets(Chuoi);
    s=strstr(Chuoi,"hoc"); 
    printf("Chuoi trich ra:");
    puts(s);
    getch();
    return 0;
}

