#include <stdio.h>


// based on question 5, implemented Horner's Rule
int main(void)
{
    float x;
    
    printf("Enter X: ");
    scanf("%f",&x);

    x = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

    printf("Answer: %.2f",x);
    return 0;

}
