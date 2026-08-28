#include<stdio.h>
int main()
{
    int i, n, num1=0, num2=1,nextTerm;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series :");
    for(i=0; i<=n; i++)
        {
            printf("%d, ", num1);
            nextTerm = num1 + num2;
            num1 = num2;
            num2 = nextTerm;
        }
        return 0;
}