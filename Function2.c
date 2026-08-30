#include <stdio.h>

// 1. Function Declaration (Prototype)
int findMax(int num1, int num2);

int main() {
    int a = 15;
    int b = 25;
    int max;

    // 2. Function Call
    max = findMax(a, b);

    printf("The maximum value between %d and %d is: %d\n", a, b, max);

    return 0;
}

// 3. Function Definition
int findMax(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result; // Returns the largest number
}

