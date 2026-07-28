#include <stdio.h>

int main(void)
{
    int amount;
    
    // 93/20 = 4    93%20 = 13
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    
    printf("$20 bills: %d\n",amount/20); // 93/20 returns 4.56, so 4.. this is how many 20s can fill 93
    amount = amount % 20;                // returns remainder of 93/20, 13
    
    printf("$10 bills: %d\n", amount/10);// 13/10 = 1
    amount = amount % 10;                // 13%10 = 3
    
    printf("$5 bills: %d\n", amount/5);  // 3/5 = 0
    amount = amount % 5;                 // 3%5 = 3

    printf("$1 bills: %d\n", amount/1);  // 3/1 = 3
    amount = amount % 1;                 // 0
    
    return 0;
}
