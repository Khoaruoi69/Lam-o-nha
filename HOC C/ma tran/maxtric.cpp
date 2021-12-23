#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short i, j, n;

    printf("Enter the dimension of the matrix: ");
    scanf("%hu", &n);

    for(i = 0; i < n;i++) {
    	for(j = 0; j < n;j++) {

    		printf("%d ", rand()%100);
    	}
    	printf("\n\n");
    }

	return 0;
}
