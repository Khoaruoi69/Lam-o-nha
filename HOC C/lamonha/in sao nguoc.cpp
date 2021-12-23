
#include<stdio.h>
#include<conio.h>
int main (){
	int n;
	printf("ve thap so "); scanf("%d",&n);
	for (int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			printf("* ");
		}
         printf("\n");}
	return 0;
}

