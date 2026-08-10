# include <stdio.h>

int input_test(void);

// ADDING FRACTION 

int main(void)
{
    printf("\a");
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    printf("Enter first fraction: "); // 5/6
    scanf("%d/%d", &num1, &denom1);   // num1 = 5, denom1 = 6

    printf("Enter second fraction: ");// 3/4
    scanf("%d/%d", &num2, &denom2);   // num2 = 3, denom2 = 4

    result_num = num1 * denom2 + num2 * denom1; // 5 * 4 + 3 * 6 = 38
    result_denom = denom1 * denom2;             // 6 * 4 = 20

    printf("The sum is %d/%d\n", result_num, result_denom); // 38/20
       
    input_test(); 

    return 0;
}



// CHECKING HOW SCANF HANDLES BAD INPUT 

int input_test(void)
{
    printf("\a\a");
    printf("\a\a");
    printf("\a\a");
    int num; 
    printf("Enter num value: ");
    scanf("%d", &num);
    
    printf("Enter new num value: ");
    scanf("%d", &num);  // C won't ask user for new input, if theres an error 
                        // // previous input, it uses the same input, 
                        // since it doesn't match with the pattern we are lookin
                        // for, the new scanf skips it too. *1/ */
    printf("%d",num); 
    return 0; 
}

