#include<stdio.h>
#include<conio.h>
void xuatmenu(){
	printf("1: tinh phuong trinh bac nhat\n");
	printf("2: kiem tra mot so co hoan thien hay khong\n");
	printf("3: liet ke cac so hoan thien trong pham vi tu 1 den n\n");
	printf("4: tim uoc chung lon nhat cua hai so nguyen a,b\n");
	printf("0: thoat chuong trinh");
}
int main(){
	int chon;
	int ktht (int n)
		{
       	long S=0;
    	for(int i=1;i<n;i++){
		if(n%i==0){
			S=S+i;
		}
	}
		if(S==n){
			return 1;
		}
		return 0;
    }
	do{
		xuatmenu();
		printf("\nhay chon cong viec:");
		scanf("%d",&chon);
		switch (chon){
			case 1:{
				float a,b;
				printf("\nnhap a,b:"); scanf("%f%f",&a,&b);
				if(a==0){
					if(b==0){
						printf("\nPTVSN");
					}
					else{
						printf("\nPTVN");
					}
				}
				else{
					printf(" x= %f",-b/a);
				}
				break;
			}
		case 2:{
			int n,s;
			printf("\nnhap n:"); scanf("%d",&n);
			for(int i=1;i<n;i++){
				if(n%i==0);
				s=s+i;
			}
			if(s==n){
				printf("%d la so hoan thien\n",n);
			}
			else{
				printf("%d ko la so hoan thien\n",n);
			}
			break;
		}
		case 3:{
        int sohoanthien(int n){
	    for(int i=1;i<n;i++){
		if(ktht(i)==1){
			printf("\t%5d",i);
	        }
	    }
    }
    break;
    }

		case 4:{
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
			break;
		}
} 
}while(chon);
return 0;
} 






















