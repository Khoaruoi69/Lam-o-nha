	#include<stdio.h>
	#include<conio.h>
	int main(){
	int a,b,c,max=0;
			printf("nhap a:"); scanf("%d",&a);
			printf("nhap b:"); scanf("%d",&b);
			for(int i=1;i<=a&&i<=b;i++){
				if((a%i==0)&&(b%i==0)){
					c=i;
					if(max<c){
						max=c;
					}
				}
			}
			printf("uoc chung lon nhat la:%d \n",max);
			return 0;
			}
			
