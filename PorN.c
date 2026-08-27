#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    
    //Check whether number is greater than zero 
    if(num>0)
    printf("%d is a positive number \n", num);
    
    //Check whether number is less than zero 
    if(num<0)
    printf("%d is a negative number \n", num);
    else 
    printf("0 is neither positive or negative");

    return 0;
}