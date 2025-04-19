#include <stdio.h>
int main (){
char str1 [100];
char str2 [100];
printf("please enter the first string :");
fgets(str1, sizeof(str1), stdin);
printf("please enter the second string :");
fgets(str2, sizeof(str2), stdin);
char *newline;
newline=str1;
while (*newline != '\0') {
    if (*newline == '\n') {
        *newline = '\0';
        break;
    }
    newline++;
}
newline = str2;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }
char *ptr1=str1;
char *ptr2=str2;
while (*ptr1!='\0'){
ptr1++;
}
while (*ptr2!='\0'){
*ptr1=*ptr2;
ptr1++;
ptr2++;
}
*ptr1='\0';
ptr1=str1;
printf("the string you wrote is \n ");
while (*ptr1!='\0'){
printf ("%c", *ptr1);
ptr1++;
}
return 0;
}