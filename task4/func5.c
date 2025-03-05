#include <stdio.h>
#include <math.h>
int isarmstrong (int n){
int temp=n , digit ,digits=0 ,sum=0 ;
    while (temp>0) 
    {
      digits ++;
      temp/=10;
    }
temp =n ;
while (temp > 0){
    digit=temp %10;
    sum+=pow(digit , digits);
    temp/=10; 
}
return sum ==n ;
}
void printarmstrong (int a ,int b){
     printf("the armstrong between %d and %d are\n",a ,b);
    while (a<=b)
{
    if(isarmstrong(a)){
        printf("%d\n",a);
    }
    a++;
}


}

int main (){
int a ,b ; 
printf("Enter the lower and upper limit ");
scanf("%d %d",& a,&b);
printarmstrong(a,b);
    return 0;
}