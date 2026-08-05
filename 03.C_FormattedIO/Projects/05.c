#include <stdio.h>

int main(void){
    
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16;
    int row_sum1, row_sum2, row_sum3, row_sum4;
    int column_sum1, column_sum2, column_sum3, column_sum4;
    int diagonal_sum1, diagonal_sum2;

    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16);
                
    row_sum1 = a1 + a2 +a3 + a4;
    row_sum2 = a5 + a6 + a7 + a8;
    row_sum3 = a9 + a10 + a11 + a12;
    row_sum4 = a13 + a14 + a15 + a16;

    column_sum1 = a1 + a5 + a9 + a13;
    column_sum2 = a2 + a6 + a10 + a14;
    column_sum3 = a3 + a7 + a11 + a15;
    column_sum4 = a4 + a8 + a12 + a16; 
    
    diagonal_sum1 = a1 + a6 + a11 + a16;
    diagonal_sum2 = a13 + a10 + a7 + a4;
    

    printf("Row sums: %d %d %d %d\n",row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Column sums: %d %d %d %d\n",column_sum1, column_sum2, column_sum3, column_sum4);
    printf("Diagonal sums: %d %d",diagonal_sum1, diagonal_sum2);
    return 0;    
}
