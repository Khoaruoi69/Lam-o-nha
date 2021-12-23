#include<stdio.h>
int main(){
	char c;
	printf("Please enter a character: ");
	scanf("%c",&c);
	printf("\nNumber %d", c);
	if(c>='A'&& c<='Z'){
		printf("\nLowercase character: %c", c+'a'-'A');
	}
	else{
		printf("\nCharacter enter is: %c",c);
	}
	return 0;
}
