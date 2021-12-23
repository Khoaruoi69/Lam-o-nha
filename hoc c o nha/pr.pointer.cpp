#include<stdio.h>
int main(){
	int var = 500, *ptr_var;
	/* var is declared as an integer and ptr_var as a poniter pointing to an integer*/
	ptr_var=&var; /* stores address of var int ptr_var*/
	/* prints value of variable (var) and address where var is stored */ 
	printf("The value %d is stored at address %u:  ", var , &var);
	// prints value stored in ptr variable ( ptr_var) and address where ptr_var is stored 
	printf("\n The value %u is stored at address: %u", ptr_var, &ptr_var);
	// prints value of variable (var) and adddress where var is stored, using pointer to variable 
	printf("\n The variable %d is strored at address: %u ",*ptr_var,ptr_var);
}
