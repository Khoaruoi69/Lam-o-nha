#include<stdio.h>
#include<conio.h>
int main(){
	int thang;
	printf("nhap thang:"); scanf("%d",&thang);
	switch (thang)
	{
		case 1: 
		case 2:
		case 3: printf("thang %d thuoc quy 1",thang); break;
		case 4:
		case 5:
		case 6: printf("thang %d thuoc quy 2",thang); break;
		case 7:
		case 8:
		case 9: printf("thang %d thuoc quy 3",thang); break;
		case 10: 
		case 11:
		case 12: printf("thang %d thuoc quy 4",thang); break;
	default: printf(" ban da nhap sai thang "); break;	
	}
	return 0;
}
