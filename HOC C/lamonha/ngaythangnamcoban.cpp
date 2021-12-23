#include<stdio.h>
#include<conio.h>
int main(){
	int ngay,thang,nam;
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
	    	printf("\nnhap ngay sinh: "); scanf("%d",&ngay);
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
				printf("\nnhap ngay sinh: "); scanf("%d",&ngay);
			if(ngay>29||ngay<1){
				printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
		}while(ngay>29|| ngay<1);
	}
	else{
		do{
				printf("\nnhap ngay sinh: "); scanf("%d",&ngay);
			if(ngay>28||ngay<1){
				printf("\nnhap sai nagy trong thang %d nhap lai",thang);
			}
		}while(ngay>28|| ngay<1);
	}
		break;
		}
}
printf("\n%d/%d/%d",ngay,thang,nam);
return 0;
}
