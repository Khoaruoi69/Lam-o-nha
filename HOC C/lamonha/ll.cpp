#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n;
    printf("nhap n:"); scanf("%d",n);
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
        if(s==n){
            printf("yes");
        }
        else{
        	printf("no");
		}

}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

