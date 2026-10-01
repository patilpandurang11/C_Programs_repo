#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	//Take input from console
	scanf("%d", &num);

	//Cheke whether number is greater than zero 
	if (num>0)
		printf("%d is a positive number \n", num);
	//Check whether number is less than zero 
	else if (num<0)
		printf("%d is a negative number \n", num);
	else
		printf("0 is neither positive or negaive");
		 
}
