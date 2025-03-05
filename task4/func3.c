#include<stdio.h>
void max (int n1 ,  int n2 ){
if(n1>n2){
printf("n1 is bigger than n2" , n1 ,n2);
}
if (n2>n1){
printf("%d is smaller than %d ",n1 ,n2);
}
else {
printf("the two numbers is equal");
}
}
int main()
{
int n1 , n2; 
printf("please enter a two numbers");
scanf("%d %d", & n1 , &n2);
max (n1 , n2);
    return 0;
}