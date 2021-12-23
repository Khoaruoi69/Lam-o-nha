// mot so ham su ly chuoi <string.h>
1. ham /* kbhit*/ kiem tra bo dem: 
cu phap: int knhit(void) --> ham tra ve gia tri khac 0 neu bo dem ban phim khac rong; tra ve gia tri
0 neu nguoc la.
2. /* Ham strchr*/ tim lan xuat hien dau tien cau ky tu trong chuoi.
cu phap: char*strchr(char*ch,int kt)--> neu tim duoc tra ve gia dia chi cua ky tu duoc timg thay dau tien, trai lai 
tra ve gia tri NULL.
3. /* Ham strcmp*/ so sanh hai chuoi
cu phap: int strcmp(char*s1, char*s2)--> tra ve gia tri s1<s2: <0
                                                        s1=s2: =0
                                                        ss1>s2: >0
4./* Ham strcat*/ dung de noi hai chuoi lai voi nhau
cu phap: char*strcat(char *s1, char *s2)---> ket qua ghe noi duoc chua trong s1.
5./* so sanh chuoi */- /* Hàm stricmp()*/ ham nay so sanh n ky tu dau tien cua 2 chuoi s1 va s2, giua chu thuong
va chu hoa khong phan biet.
cu phap: int stricmp(const char*s1,const char * s2)--> ket qua tra ve tuong tu ket qua tra ve strcmp. 
6. /* Ham strcpy*/ sao chep toan bo noi dung cua chuoi nguon vao chuoi dich.
cu phap: char*strcpy(char*Des, const char*soure, size_t n).
8. /* Ham strchr*/ trich mo phan chuoi
de trich mot chuoi  con cua mot chuoi ky tu bat dau tu mot ký tu duoc chi dinh trong chuoi cho de het chuoi 
ta su dung ham strchr().
cu phap: char*strchr(const char*str,int c)
note: neu ky tu khong co trong chuoi tra ve ket qua la NULL.
ket qua tra ve cua ham la mot con tro, con tro nay chi den ky tu c duoc tim thay dau tien trong chuoi str.
9./* tim kiem noi dung chuoi- Ham strstr()*/
Ham strstr() duo su dung de tim kiem su xuat hien dau tien cua chuoi s2 trong chuoi s1.
cu phap:  char* strstr(const char*s1, const char*s2)
--> ket qua tra ve cua ham la mot con tro chi den phan tu dau tien cua chuoi s1 co chua trong chuoi s2 hoac gai tri NULL neu chuoi s2 khong co trong 
chuoi s1
10. /* Lay chieu dai chuoi voi ham strclen()*/
cu phap: int strlen(const char*s);
#include<conio.h>
#include<stdio.h>
void main(){
	char string[]="borland internatinal";
	prinft("%d\n",strlen(string)); // ket qua 21
	getch();
}
vD: gan mot chuoi vao chuoi khac
Gan tung ky tu trong chuoi.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	clrscr();
	char newstr[35];
	char str[]=" truong dai hoc Cong Nghe Hutech ";
	for(int i=0;i<strlen(str);i++)
	newstr[i]=str[i];
	newstr[i]='\0';
	getch();
}
11. /* doi ky tu thuong thanh ky tu hoa- ham toupper()*/
ham toupper()(trong ham ctype.h) duoc dung de chuyen doi mot ky tu thuong thanh mot ky tu hoa.
cu phap: char toupper(char c)
12./* doi chuoi ky tu thuong thanh chuoi ky tu hoa- ham strupr()*/
cu phap: char*strupr(char*s)
13./* doi chuoi chu hoa thanh chuoi chu thuong- ham strlwr()*/
cu phap: char*strlwr(char*s)
14. /* doi chuoi ra so-*/ ham atoi,atof(),atol(),(trong stdlib.h);
cu phap: int atoi(const char*s): chuyen chuoi thanh so nguyen 
         long atol(const char*s): chuyen chuoi thanh so nguyen dai float
         atof(const char* s): chuyen chuoi thanh so thuc
         neu chuyen  doi ko thanh cong ket qua tra ve cua cac ham la 0.
15. char*strtok(char*s1,const char*s2)
xem s1 la chuoi con, ngan cach nhau boi 1 hay nhieu ky tu co trong s2.
VD: #include<string>
void main(){
	char s[80], *p;
	gets(s);
	p= strtok(s," ");
	if(p) printf("%s",p);
	while(p){
		p=strtok(NULL," ");
		if(p) printf("%s",p);
	}
}




















































