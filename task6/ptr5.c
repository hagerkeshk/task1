#include <stdio.h>
int main (){
int r1, r2 ,c ;
printf("please enter the number of rows of first mat ");
scanf("%d",& r1);
printf("please enter the number of colmns of first mat = num of rows of the second ");
scanf("%d",& c);
printf("please enter the number of colmns of the second mat ");
scanf("%d",& r2);
int matA[r1][c], matB[c][r2], result [r1][r2];

printf("please enter the elements of the first array matA\n");
for (int i=0; i<r1;i++){
    for (int j=0;j<c;j++)
scanf ("%d",& *(*(matA + i) + j));

}
printf("please enter the elements of the first array matB\n");

for (int i=0; i<c;i++){
    for (int j=0;j<r2;j++)
scanf ("%d",& *(*(matB+i)+j));

}
for(int i = 0; i < r1; i++) {
    for(int j = 0; j < r2; j++) {
        *(*(result + i) + j) = 0;
    }
}
for(int i = 0; i < r1; i++) {
    for(int j = 0; j < r2; j++) {
        for(int k = 0; k < c; k++) {
            *(*(result+ i) + j) += *(*(matA + i) + k) * *(*(matB + k) + j);
        }
    }
}
printf("the result mat ={");
for(int i = 0; i < r1; i++) {
    for(int j = 0; j < r2; j++) {
        printf("%d ,", *(*(result + i) + j));
    } }
printf("}");
    return 0; 
}