#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;

    printf("Enter the base (x): ");
    scanf("%lf", &x);

    printf("Enter the exponent (y): ");
    scanf("%lf", &y);

    result = pow(x, y);

    printf("%.2lf^%.2lf = %.2lf\n", x, y, result);

    return 0;
}
