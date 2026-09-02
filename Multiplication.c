#include <stdio.h>

int main() {
    int num, range;

    printf("Enter an integer to print its table: ");
    scanf("%d", &num);

    printf("Enter the range (e.g., up to 10 or 12): ");
    scanf("%d", &range);

    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 1; i <= range; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
