#include<stdio.h>
#include<stdlib.h>
int main(){
	float*calloc1,*calloc2;
	int i;
	
	calloc1=(float*) calloc(3, sizeof(float));
	calloc2=(float*) calloc(3, sizeof(float));
	if(calloc1!=NULL && calloc2!=NULL){
		for(i=0; i<3;i++){
			printf("\ncalloc1[%d] holds %05.5f ", i, calloc1[i]);// dia chi 
		    printf("\ncalloc2[%d] holds %05.5f ", i, *(calloc2+i));// noi luu phan tu
		    
		}
		free(calloc1);
		free(calloc2);
		return 0;
	}
	else{
		printf("\n Not enough memory\n");
		return 1;
	}
}
