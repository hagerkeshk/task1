#include <stdio.h>

int main() {
    int num, i = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        i = 1;  
    } else {
        while (num != 0) {
            num = num / 10;  
            i++;             
        }
    }

    printf("Number of digits: %d\n", i);
    
    return 0;
}

