#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0 ? 1 : (discriminant == 0 ? 0 : -1)) {
        case 1: // Real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
            break;

        case 0: // Real and equal roots
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root2);
            break;

        case -1: // Complex roots
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
            break;

        default:
            printf("Invalid input!\n");
    }

    return 0;
}