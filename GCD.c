#include <stdio.h>

// Recursive function to find GCD
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Take absolute values to handle negative inputs correctly
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;

    gcd = findGCD(a, b);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
