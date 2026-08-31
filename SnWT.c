#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("--- Before Swapping ---\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Method 1: Using Arithmetic Operators (+ and -)
    a = a + b; // a becomes 30 (10 + 20)
    b = a - b; // b becomes 10 (30 - 20, which is original a)
    a = a - b; // a becomes 20 (30 - 10, which is original b)

    printf("--- After Method 1 (Arithmetic) ---\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Method 2: Using Bitwise XOR Operator (^)
    // (Swapping them back to their original values)
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 

    printf("--- After Method 2 (Bitwise XOR) ---\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

