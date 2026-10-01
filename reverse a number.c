#include<stdio.h>
/* Iterative function to reverse digits of num*/
int revers (int num)
{
 int rev_num = 0;
 while(num > 0)
 {
	rev_num = rev_num*10 + num%10;
	num = num/10;
 } 
  
 return rev_num;
 
}

/* Main program to test reverse Digit*/
int main()
{
 int num = 0;
 printf("Enter any number : ");
 scanf("%d", &num);
 printf("\n After reverse no is : %d", revers(num));
 return 0;
}
