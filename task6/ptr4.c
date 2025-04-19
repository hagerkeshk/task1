#include <stdio.h>
int main (){
int arr[5]={10,20,30,40,50};
int found =0; 
int x;
int *ptr= &x;
printf("please enter a number you want to search for ");
scanf("%d",& *ptr);
for (int i=0;i<5;i++){
if (*ptr==arr[i]){
    found =1;
    break;
}}
if (found){
    printf("the number %d found in the array ",*ptr);
}
else {
    printf("the number %d is not found in the array",*ptr);
}
    return 0;
}