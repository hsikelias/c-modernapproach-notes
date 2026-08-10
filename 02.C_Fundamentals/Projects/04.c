#include <stdio.h>
#define TAX 0.05

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f",&amount);

    amount += amount * TAX;
    
    printf("With tax added: $%.2f",amount);

    return 0;
}
