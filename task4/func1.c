#include <stdio.h>
int cube (int n){
return n*n*n ;
}
int main () {
int result; 
int n ;
printf("please enter a number \n");
scanf("%d",& n);
result=cube(n); 
printf("the cube of number %d is %d \n " ,n ,result);
return 0;
}