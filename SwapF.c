#include <stdio.h>

int main() {
    int a, b, temp;

    // User input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;    // 1. Save the value of 'a' in 'temp'
    a = b;       // 2. Assign the value of 'b' to 'a'
    b = temp;    // 3. Assign the saved 'temp' value to 'b'

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

