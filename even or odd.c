#include<stdio.h>
int main() 
{
	// This variable is to store the input number 
	int num;
	
	printf("Enter an interger : ");
	scanf("%d", &num);
	
	// Modulus (%) returns reminder 
	if(num %2 == 0)
		printf("%d is an even number", num);
	else
		printf("%d is an odd number", num);
		
	return 0;
	
}
