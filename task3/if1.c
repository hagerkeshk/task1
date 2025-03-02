#include<stdio.h>

int main()
{
char c ;
printf("please input a character ");
scanf(" % c",& c);
if ( (c>='a' || c<='z')||(c>='A'||c<='Z') ){
printf("the input is alphape");}
else {
printf("the input is not alphabet");}
    return 0;
}