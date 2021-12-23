#include<stdio.h>
#include<conio.h>
void nhapn(int&n){
	do{
		printf("nhap n:"); scanf("%d",&n);
		if(n<0||n>100){
			printf("nhap sai nhap lai");
		}
	} while(n<0||n>100);
}
int ktht(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
	        return 1;
	}
	else{
		
	    return 0;
	}
}
void soHT(int n){
	if(ktht(n)==1)
	{
		printf("so %d la so hoan thien",n);
	}
	else{
		printf("so %d ko la so hon thien",n);
	}
}
int soHTn(int n){
	for(int i=1;i<n;i++){
		if(ktht(n)==1){
			printf("%4d",i);
		}
	}
}




int mmain (){
	int n;
	nhapn(n);
	soHT(n);
	printf("so hoan thien tu 1 den %d la",n);
	soHTn(n);
	return 0;
}













