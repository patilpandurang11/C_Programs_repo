#include<stdio.h>
int main()
{
	int n, i;
	unsigned long long factorial = 1;
	printf("Enter an integer: ");
	scanf("%d", &n);
	//show error if the user enters a negative integers
	if(n<0)
		printf("Error ! factorial of a negative number dosn't exist.");
	else
	{
		for (i=1; i<=n; ++i)
		{
			//factorial = factorial * i;
			factorial *= i;
		}
		printf("Factorial of %d = ,%llu ", n, factorial);
	}
	return 0;
 	
}
