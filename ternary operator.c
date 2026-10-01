#include<stdio.h>
int main()
{
	//Variable declaration
	int n1, n2, max;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &n1, &n2);
	
	//Largest among n1 and n2
	max = (n1 >n2) ? n1 : n2;
	
	//Print the largest number 
	printf("Largest nauber between %d and %d is %d .", n1, n2, max);
	return 0;
	
}
