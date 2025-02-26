#include<stdio.h>

int main()
{
char c ;
printf("please input a character ");
scanf(" % c",& c);
if (c=='e'||c=='E'||c=='u' || c=='U'||c=='a'||c=='A'|| c=='o'||c=='O'||c=='i'||c=='I')
{
printf("the input is vowel alphabet")
;}
else if ((c>='a'||c<='z')||(c>='A'||c<='Z')) {
printf("the input is consonat alphabet");}
else {printf("the input is not alphabet");}
    return 0;
}