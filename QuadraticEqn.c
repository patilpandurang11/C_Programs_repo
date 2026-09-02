#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check conditions for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    // Check conditions for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    // If roots are complex (imaginary)
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct:\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
