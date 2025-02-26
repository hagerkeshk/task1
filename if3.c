#include<stdio.h>

int main()
{
int n ;
printf("please input a number from 1 to 12  ");
scanf(" % d",& n);
if (n==1||n==3||n==5||n==7||n==8||n==10||n==12)
{
printf("this month is 31 days ")
;}
else if (n==4||n==6 ||n==9 ||n==11) {
printf("this month is 30 days ");}
else if (n==2){printf("this month is 29 or 28");}
else{
printf("you input a wrong number");
}
    return 0;
}