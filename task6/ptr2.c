#include <stdio.h>
int main (){
int arr1[5]={10,20,30,40,50};
int arr2[5]={60,70,80,90,100};
int arr3[5]={10,20,30,40,50};
int*ptr1=arr1;
int*ptr2=arr2;
int*ptr3=arr3;
for (int i=0;i<5;i++){
*(ptr1+i)=*(ptr2+i);

}
for (int i=0;i<5;i++){
    *(ptr2+i)=*(ptr3+i);
    
    }

printf("arr1={");
for (int i=0;i<5;i++){
printf("%d ,",arr1[i]);

}
printf("}\n");
printf("arr2={");
for (int i=0;i<5;i++){
printf("%d ,",arr2[i]);

}
printf("}\n");
    return 0;
}