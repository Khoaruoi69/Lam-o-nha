#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[100];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    int dem;
    for(int i=0;i<6;i++){
        if (n-a[i]==2|| a[i]-n==2){
          dem ++;
            }
    }
    int demk;
    for(int i=0;i<6;i++){
        if(k-a[i]==2||a[i]-k==2){
            demk++;
        }
    }
    int s=dem+demk;
    printf("%d",s);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

