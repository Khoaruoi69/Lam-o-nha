#include<stdio.h>
#include<conio.h>
int main(){
	char C,P,bp;
	printf(" \n nhap tu ban phim: "); scanf("%c",&bp);
//	scanf("%c",&C);
//	scanf("%c",&P);
	while( 1){
		if(bp==C||bp==P ){
		printf(" ngon ngu lap trinh ");
     	}
     	else{
     		if(bp!=C){
     			printf(" turbo c");
			 }
			else{
				if(bp!=P){
				printf(" turbo pascal");
			}
		 }
	}
}
	return 0;
}
