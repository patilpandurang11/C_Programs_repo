#include<stdio.h>
/*Iterative function to reverse digit of num*/
int reverse(int num)

{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

/*Main program to test reverse digit*/

int main()
{
    int num = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    printf("\nAfter reverse the number is : %d", reverse(num));
    return 0;
}