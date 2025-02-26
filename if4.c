#include<stdio.h>

int main()
{
int a , b ,c  ;
printf("please input an angle 1   ");
scanf(" %d",& a);
printf("please input an angle 2  ");
scanf(" %d",& b);
printf("please input an angle 3   ");
scanf(" %d",& c);
if (a>0 &&b>0&&c>0&&(a+b+c==180))
{
printf(" it's a valid triangle  ");
}
else {
printf("it's invalid triangle ");}
    return 0;
}