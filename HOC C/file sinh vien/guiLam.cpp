#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//fflush(stdin);
void nhap(){
	int ngay;
	int thang;
	int nam;
     printf("\n nhap ngay /thang/ nam : ");
	printf("\nnhap nam: "); scanf("%d",&nam);
	do{
		printf("\nnhap thang: "); scanf("%d",&thang);
		if(thang<1||thang>12){
			printf("\nnhap sai thang nhap lai ");
		}
	} while(thang<1||thang>12);
	
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	    do{
	    	printf("\nnhap ngay: "); scanf("%d",&ngay);
	    	if(ngay>31||ngay<1){
	    		printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
		}while(ngay>31||ngay<1);
		break;	
	{
		case 4:
		case 6:
		case 9:
		case 11:
			do{
				printf("\nnhap ngay sinh: "); scanf("%d",&ngay);
			if(ngay>30||ngay<1){
				printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
	}while(ngay>30|| ngay<1);
		break;
	} 
	{
		case 2: 
		if(nam%4==0&&nam%100!=0){
		do{
				printf("\nnhap ngay : "); scanf("%d",&ngay);
			if(ngay>29||ngay<1){
				printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
		}while(ngay>29|| ngay<1);
	}
	else{
		do{
				printf("\nnhap ngay : "); scanf("%d",&ngay);
			if(ngay>28||ngay<1){
				printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
		}while(ngay>28|| ngay<1);
	}
		break;
		}
}
    printf("\nngay/thang/nam : %d/%d/%d",ngay,thang,nam);
    int ngays = ngay;
	int thangs= thang;
	int nams = nam;
    printf("\nXuat ra ngay tiep theo: ");
  /*  if( thang ==2&&ngay ==29){
    	ngays ==1 ;
    	thangs = thang +1;
	}
	else{
		ngays = ngay +1;
	}
	if(thang ==1,3,5,7,8,10,12&&ngay==31){
		ngays ==1;
		if(thang == 12){
			thangs == 1;
		}
		else{
			thangs=thang +1;
		}
	}
	else{
		ngays = ngay + 1;
	}
	*/
	if((thang == 4||thang==6||thang==9||thang==11&&ngay==30)||( (thang ==2&&ngay==29)|| (thang==2 &&ngay==28&&nam%4!=0))||(thang ==1,3,5,7,8,10,12&&ngay==31)){
		ngays = 1; 
		thangs=thang +1;
	}
	else{
		ngays = ngay +1;
		thang=thang;
	}
	if(ngay ==31 && thang ==12){
		nams = nam +1;
		thangs =1;
	}
	else{
		nams = nam;
	}
	printf("\nngay/thang/nam: %d/%d/%d",ngays,thangs,nams);
		printf("\n++++++++++++++++++");
}
int main(){
   
	nhap();
}



