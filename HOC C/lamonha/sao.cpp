#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=5;i<0;i=i-1){
    	printf("*");
        for(int j=0;j<5+1;j++){
            printf("*");
        }
            printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
