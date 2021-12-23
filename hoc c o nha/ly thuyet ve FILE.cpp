/* ss2: Gioi thieu chung ve cac ham xu ly tep 

Cac ham cap 2 su dung cau truc FIlE va ma ket thuc EOF duoc khai bao trong <stdio.h>. Ma EOF bang (-1)  
con cau truc FILE gom cac thanh phan dung de quan ly tap tin nhu:
	+ level cho biet co con du lieu  trong vung dem khong
	+ bsize do lon vung dem (mac dinh la 521 byte)
	+ flags cac co trang thai............
2.1 cac ham dung chung cho hai kieu:    note: fb la con tro tuong ung voi tep
                                              s la con tro tro toi mot chuoi ky tu.
                                             

	1. fopen dung de mo tep. truoc khi lam viec can mo no ****!= fclose dong tep. can dong tep truoc khi ket thuc chuong trinh
	hay khi khong lam viec voi tep nua. ****fcloseall dong tat cac tep dang mo . 
	
	*dang ham: FILE*fopen (const char* ten tep, const char * kieu);
	*          int fclose(FILE*fb);  
	*          int fcloseall(void);
	
	2. fflush lam sach vung dem cau tep. ***** fllushall
	
	* dang ham: int fflush(FILE*fp);
	*           int fflush(void);
	
	3. ferror cho biet co loi (khac 0) hay khong loi ( bang 0)
	
	*dang ham: int ferror(FILE*fp);
	
	4. perror thong bao loi tren man hinh (khi biet co loi).
	
	* dang ham: void perror(const char*s);
	
	5. feof cho biet da gap cuoi tep hay  chua.
	*dang ham: int foef(FILE*fp);
	
	6. unlink va remove dung de loai tep tren dia. 
	* dang ham: int unlink(const char * ten tep);
	*           int remove(const char * ten tep);
	7. rewind dung de chuyen con tro den dau tep.****** fseek dung de di chuyen con tro den vi tri bat ky tren tep ( ham nay chi nen dung
	theo kieu nhi phan)
	8. ftell cho biet vi tri hien tai cua con tro 

2.2 Cac ham nhap xuat ky tu: dung cho ca NP va VB.    note: fp la con  tro tep 
                                                            ch la gia tri nguyen
                                                            s la con to to toi dia chi dau cua mot chuoi ky tu ket thuc bang dau'\0'.

. putc va fputc dung de ghi ky tu tren tep.
* dang ham: int putc(int ch, FILE*fp);
            int fputc(int ch,File*fp);
note: ham ghi len tep fb co ma bang: m = ch % 256. Trong do ch dc coi la mot so nguyen ko dau.

. getc va fgetc dung de doc ky tu tu tep.
* dang ham: int getc(FILE*fp);
            int fgetc(FILE*fp);

2.3 Cac ham nhap xuat theo kieu van ban:     note: fb la con tro tep
                                                   dk chua dia chi cua chuoi dieu khien.
                                                   ... la danh sach cac doi ma gia tri cua chung can ghi len tep.

. fprintf dung de ghi du lieu theo khuon dang len tep.
* dang ham: int fprintf(FILE*fp,const char*dk,...)

. fscanf dung de doc du lieu theo khuon dang.
* dang ham: int fsacnf(FILE*fp, const char*dk,...);

. fputs dung de ghi mot chuoi ky tu len tep.\
* dang ham: int fputc(cons char*s, FILE*fp);
. fgets dung de doc mot day ky tu tu tep.
* dang ham: char*fgets(char*s,int n,FILE*fp);

2.4 Cac nhap xuat theo kieu  nhi phan: 
. putw dung de ghi mot so nguyen ( 2 byte) len tep
* dang ham: int putw(int n,FILE*fp);
. getw dung de doc mot so nguyen ( 2 byte) tu tep .
*dang ham: int getw(FILE*fp);
. fwrite dung de ghi mot so mau tin len tep.
* dang ham: int fwrite(void*ptr,int size, int n, FILE*fp);
. fread dung de doc ,ot so mau tin tu tep.
 
 




































