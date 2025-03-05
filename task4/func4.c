#include <stdio.h>
   
 int isprime(int n) {
        if (n< 2) {
        return 0;  
    }
    for (int i = 2; i * i <= n ; i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;
}
void printPrimes(int a, int b)
 {
     printf("All prime number between %d to %d are: ", a, b);
     
     while(a <= b)
     {
         
         if(isprime(a))
         {
             printf("%d\n", a);
         }
         
         a++;
     }
 }
int main()
 {
int a, b;     
printf("Enter the lower and upper limit to list prime numbers ");
scanf("%d %d", & a, & b);  
printPrimes(a, b); 
return 0;
 }
 