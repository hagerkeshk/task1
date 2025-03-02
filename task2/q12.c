#include <stdio.h>
#include <math.h>

int main() {
    double num, sqrt_result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    sqrt_result = sqrt(num);

    printf("Square root of %.2lf = %.2lf\n", num, sqrt_result);

    return 0;
}
