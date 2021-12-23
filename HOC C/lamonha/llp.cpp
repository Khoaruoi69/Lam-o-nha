#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapn (int&n){
    do {
        printf("nhap n:"); scanf("%d",&n);
        if(n<0||n>1000){
            printf("nhap sai nhap lai");
        }
    }while(n<0||n>1000);
}

int ktht(int n){
    int S=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            S=S+i;
        }
    }
        if(S==n){
            return 1;
        }
        return 0;
}

void soht (int n)
{
        if(ktht(n)==1){
            printf("\n%d la so hoan thien",n);    
        }
        else{
            printf("\n%d ko la so hoan thien",n);
        }
}

int main() {
    int n;
    nhapn(n);
    soht(n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

