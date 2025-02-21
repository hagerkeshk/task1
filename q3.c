#include <stdio.h>

int main() {
    int i, j;
    int sum, sub, mult;
    float divi;

    printf("Please enter the numbers i, j:\n");
    scanf("%d %d", &i, &j);

    sum = i + j;
    sub = i - j;
    mult = i * j;
    divi = (float)i / j; 

    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mult);
    printf("Division = %.2f\n", divi);

    return 0;
}
