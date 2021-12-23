// ham free dung de giai phong bo nho khi khong can thiet.
#include<stdio.h>
#include<stdlib.h> // required for the malloc and freee functions 
int main(){
	int number;
	int *ptr;
	int i;
	
	printf("\n How many ints would you like store ?");
	scanf("%d",&number);
	ptr =(int*) malloc(number*sizeof(int));// allocate memory
	if(ptr!=NULL){
		for(i=0;i<number;i++){
			*(ptr+i)=i;
		}
		
		for(i=number;i>0;i--){
			printf("%d\n",*(ptr+(i-1))); // print out in reverse order
		}
		free(ptr); // free allocated memory
		return 0;
	}
	else{
		printf("\n Memory allocated failed - not enough memory.\n ");
		return 1;
	}
}
