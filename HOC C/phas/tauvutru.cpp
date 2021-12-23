#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
#include<math.h>
void tau_cd(void); // tau chuyen dong
void nhap_nhay_bt(void); // sao nhap nhay tren bau troi.
void main(void);

int a,b,x,y,x0,y0;
int mh=0,mode=0,n,i;
float goc,xt,yt;
char*p;
int xx[1001],yy[1001];
// ham main
void main(void){
	initgraph(&mh,&mode,"");
	if(graphresult()!=0){
		exit(1);
	}
	// ve tau vu tru
	setcolor(RED);
	ellipse(100,50,0,360,20,8);
	ellipse(100,46,190,357,20,6);
	line(107,44,110,38);
	circle(90,38,2);
	setfill(SOLID_FILL,BLUE);
	floodfill(101,54,RED);
	setfillstyle(SOLD_FILL,MAGENTA);
	floodfill(94,45,RED);
	// luu anh tau vu tru vao bo nho
	n= imagesize(79,36,121,59);
	p=(char*)malloc(n);
	getimage(79,36,121,59,p);
	// ve bau troi day sao va luu vi tri cua chung vao
	// cac mang xx, yy de phuc vu ham nhap_nhay_bt
	cleardevice();
	for(i=1;i<=1000;++i){
		xx[i]=random(getmaxx());
		yy[i]=random(getmaxy());
		putpixe(xx[i],yy[i],random(getmaxcolor()));
	}
	// xac dinh gia tri ban dau cho cac bien dung de dieu khien chuyen dong tau
	goc=2*M_PI+M_PI/2;
	x0=(getmaxx()-42)/2;
	y0=(getmaxy()-25)/2;
	a=x0;
	b=y0;
	// chu trinh tau chuyen dong va ngoi sao lap lanh
	do{
		tau_cd();
		nhap_nhay_bt();
	}
	while(!kbhit());
	getch();
	closegraph();
}
void tau_cd(void){
	xt=a*cos(goc)+x0;
	yt=b*sin(goc)+y0;
	x=(int)(xt+0.5);
	y=(int)(yt+0.5);
	// dat tau vu tru tren mang hinh
	putimage(x,y,p,XOR_PUT);
	delay(500);
	// xoa
	putimage(x,y,XOR_PUT);
	// thay doi goc de tau chuyen dong 
	goc-=M_PI/30;
	if(goc<M_PI/2){
		goc = 2*M_PI+M_PI/2;
	}
}
void nhap_nhay_bt(void){
	static i=1; // lenh thuc hien 1 lan khi dich
	int j;
	// cho nhap nhay bang cach doi 50 mau ngoi sao
	for(j=1;j<=50;++j){
		putpixel(xx[i],yy[i],random(getmaxcolor()));
		++i;
		if(i>1000){
			i=1;
		}
	}
}































































