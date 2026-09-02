#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Convert negative numbers to positive
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;

    // Handle edge case where both numbers are zero
    if (a == 0 && b == 0) {
        printf("LCM of 0 and 0 is undefined.\n");
        return 0;
    }

    gcd = findGCD(a, b);
    
    // Divide before multiplying to prevent integer overflow
    lcm = (a / gcd) * b;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
