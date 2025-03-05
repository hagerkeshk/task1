#include <stdio.h>
void printNumbers(int a, int b, int c) {
    if (a> b) {
        return;
    }
    if ((a % 2 == 0 && c) || (a % 2 != 0 && !c)) {
        printf("%d ", a);
    }
    
    printNumbers(a + 1, b, c);
}

int main() {
    int a, b, c;
    printf("Enter the start of the range: ");
    scanf("%d", &a);
    printf("Enter the end of the range: ");
    scanf("%d", &b);
    printf("Enter 1 to print even numbers or 0 to print odd numbers: ");
    scanf("%d", &c);
    
    printNumbers(a, b, c);
    
    return 0;
}
