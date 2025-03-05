#include <stdio.h>
int diameter (int r){
return r*2;
}
float area (int r ){
return 3.14*r*r;

}
float circ (int r ){
return 2*3.14*r;

}
int main (){
    int rad ;
    printf("please enter the radius of the circle");
    scanf("%d",& rad);
printf("diameter = %d \n circumference=%f \n area=%f",diameter(rad) ,circ(rad) ,area(rad));
    return 0 ;
}