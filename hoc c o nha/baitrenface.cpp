#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j;
	printf("\nEnter n: "); scanf("%d",&n);
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
		printf("-");
	    }
	    printf("1");
	if(i<=6){
		int k=n-i;
	    printf(" %d",k);
	}
	if(i<=4){
		printf(" %d",6);
	} 
	if(i<=2){
		printf(" %d",9);
	}
	if(i<=1){
	for(int j=i;j>=1;j--){
		printf(" 8");
	}
}
	if(i<=3){
		for(int j=i;j>=3-i;j--){
		printf(" 7");
	}
}
	printf("\n");
	/*	for(int j=0;j<n-i+1;++j){
			printf("");
		}
		for(int j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");*/
}
}
