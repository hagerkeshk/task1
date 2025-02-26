#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter side 1: ");
    scanf("%f", &a);
    
    printf("Enter side 2: ");
    scanf("%f", &b);
    
    printf("Enter side 3: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}