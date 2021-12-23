#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	int c,z,k,o,p,t,q,f,i;
	printf("\nEnter Number you want to transfer:  ");
	scanf("%d",&n);
	if(n>=128){
		c=n-128;
		printf("1");
		}
		else{
			printf("0");
		}
	if(c>64){
			int z=c-64;
			printf("1");
		}
		else{
			printf("0");
		}
	if(z>32){
		int k=z-32;
		printf("1");
	    }   
	    else{
	    	printf("0");
		}
	if(k>16){
		int o=k-16;
		printf("1");
	    }
	    else{
	    	printf("0");
		}
	if(o>8){
		int p=o-8;
		printf("1");
	}
	else{
		printf("0");
	}
	if(p>4){
		int t=p-4;
		printf("1");
	}
	else{
		printf("0");
	}
	if(q>2){
		int f=q-2;
		printf("1");
	}
	else{
		printf("0");
	}
	if(i>=1){
		printf("1");
	}
	else{
		printf("0");
	}
}
