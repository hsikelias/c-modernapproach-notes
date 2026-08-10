#include <stdio.h>

int main(void)
{
    float x;
    
    printf("Enter a value for x: ");
    scanf("%f",&x);

    x = ((3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(1*x*x)+(7*x)-6); 
    
    printf("Answer: %.2f",x);
    return 0;
}
