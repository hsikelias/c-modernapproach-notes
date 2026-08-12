#include <stdio.h>

int main (void){

    //  1  2   3   4   5   6   7   8   9   10  11
    int d, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int firstSum, secondSum, total;

    printf("Enter the first single digit group: ");
    scanf("%d",&d);
    
    printf("Enter the second group with 5 digits: ");
    scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);

    printf("Enter the thrid group with 5 digits: ");
    scanf("%1d%1d%1d%1d%1d", &n6, &n7, &n8, &n9, &n10 );

    firstSum = d + n2 + n4 + n6 + n8 + n10;
    secondSum = n1 + n3 + n5 + n7 + n9;
    
    total = (firstSum  * 3) + secondSum;

    printf("Check digit: %d\n", 9-((total - 1)%10));

    return 0;
}
