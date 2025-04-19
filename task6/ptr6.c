#include <stdio.h>
int main() {
    char str[100];
    char *ptr, *cleanPtr;
    int length = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);  
    ptr = str;
    cleanPtr = str;  

    while (*ptr != '\0') {
 if (*ptr != '\n') {
            *cleanPtr = *ptr;
            cleanPtr++;
        }
        ptr++;
    }
    *cleanPtr = '\0';  
    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Cleaned string: %s\n", str);
    printf("Length of the string = %d\n", length);
    return 0;
}
