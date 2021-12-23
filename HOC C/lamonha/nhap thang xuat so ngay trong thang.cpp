#include<stdio.h>
#include<conio.h>
int main(){
	int thang,nam;
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
			printf("\n thang %d co 30 ngay",thang); 
		break;	
	{
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nthang %d co 31 ngay",thang);
		break;
	} 
	{
		case 2: printf("\nnhap nam: "); scanf("%d",&nam);
		if(nam%4==0&&nam%100!=0){
			printf("thang 2 co 29 ngay");
		}
		else{
			printf("thang 2 co 28 ngay ");
		}
		break;
		}
}
		return 0;
}

























