// chuong trinh sau tao 2 tep co ten la vb va np. trong chuong trinh dung cac ham sau:
// + fopen de mo tep; + fputc de ghi mot ky tu len tep; + fclose de dong tep; 

#include<stdio.h>
main(){
	FILE*fvb,*fnp; // khai bao 2 bien con tro tep 
	fvb=fopen("vb","wt");// mo tep vb ghi theo kieu van ban gan con tro tep cho bien fvb
	fnp=fopen("np","wb");// mo tep np de ghi theo kieu van ban gan con tro tep cho bien fnp 
	/* ghi cac ky tu len tep fvb*/
	fputc('A',fvb);
	fputc(26,fvb);
	fputc(10,fvb);
	fputc('B',fvb);
	/*ghi cac ky tu len tep fnp*/
	fputc('A',fnp);
	fputc(26,fnp);
	fputc(10,fnp);
	fputc('B',fnp);
	fclose(fvb);// dong tep fvb
	fclose(fnp);// dong tep fnp 
}

// muon doc cac ky tu cua tep ta can dung ham fgets theo kieu nhi phan.

