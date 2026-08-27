#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter value of X : ");
    scanf("%d", &x);
    printf("Enter value of Y : ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping : X = %d, Y = %d", x, y);
    return 0;
}