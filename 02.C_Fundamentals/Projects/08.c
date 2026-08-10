#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment;    

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    
    loan = (((interest_rate/100)/12)*loan)+loan-monthly_payment;
    printf("Balance remaining after first payment: $%.2f",loan);

    loan = (((interest_rate/100)/12)*loan)+loan-monthly_payment;
    printf("Balance remaining after second payment: $%.2f",loan);

    loan = (((interest_rate/100)/12)*loan)+loan-monthly_payment;
    printf("Balance remaining after third payment: $%.2f",loan);

    return 0;
}

