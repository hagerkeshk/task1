#include <stdio.h>

int main() { 
    int x;
    
    printf("Please input a number: ");
    scanf("%d", &x);

    if (x % 5 == 0 && x % 11 == 0) {
        printf("The number is divisible by both 5 and 11\n");
    } 
    else if (x % 11 == 0) {
        printf("The number is divisible by 11\n");
    } 
    else if (x % 5 == 0) {
        printf("The number is divisible by 5\n");
    } 
    else {
        printf("The number is not divisible by 5 or 11\n");
    }

    return 0;
}
