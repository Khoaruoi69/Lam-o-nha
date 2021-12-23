#include<stdio.h>
int main(){
	char C,P,bp;
	
	scanf("%c",&C);
	scanf("%c",&P);
do{
	printf("\nnhap tu ban phim: "); scanf("%c",&bp);
	if(bp!=C||bp!=P){
		printf("\n ngon gu lap trinh");
	}
}while(bp==C||bp==P);
return 0;
}
