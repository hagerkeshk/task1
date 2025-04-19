# include <stdio.h>
int main (){
int arr1[5]={10,20,30,40,50};
int arr2[5];
int *ptr1=arr1;
int *ptr2=arr2;
for (int i=0 ; i<5 ; i++){
*(ptr2+i)=*(ptr1+i);

}
printf("copied array =\n{\n");

for(int j=0 ;j<5;j++){
printf("%d\n" , arr2[j]);

}
printf("}");

    return 0; 
}
