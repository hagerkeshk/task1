#include <stdio.h>

int main() {
    int num, multi = 1, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        multi = 0;  
    } else {
        while (num != 0) {
            digit = num % 10; 
            multi *= digit;    
            num /= 10;         
        }
    }

    printf("Product of digits: %d\n", multi);
    
    return 0;
}