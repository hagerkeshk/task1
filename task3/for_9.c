#include <stdio.h>

int main() {
    int num, i;

    // Ask user for a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print multiplication table
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
