// EXERCISES



// 1. 
// a.) printf("%6d, %4d", 86, 1040); = ____86,1040
// b.) printf("%12.5e", 30.253); =  3.02530e+01
// c.) printf("%.4f", 83.162); = 83.1620
// d.) printf("%-6.2g", .0000009979) = 1e-06 



// 2.
// a.) %-8.1e
// b.) %10.6e
// c.) %-8.3f
// d.) %6.0f


// 3.
// a.) "%d" and " %d" are equal
// b.) "%d-%d-%d" and "%d -%d -%d" are equal
// c.) "%f" and "f " are not equal because the space here leaves a trailing whitespace, which prompts scanf to wait for user to hit enter.
// d.) "%f,%f" and "%f, %f" are equal.

// 4.
// int i, j;
// float x;
//
// scanf("%d%f%d", &i, &x, &j);
// user input = 10.3 5 6
//
// i = 10
// x = .3
// j = 5
//

// 5.
// float x, y;
// int i;
//
// scanf("%f%d%f", &x, &i, &y);
// 12.3 45.6 789
//
// x = 12.3
// i = 45
// y = 0.6
//

// 6.
// modify the addfrac.c program so user is allowed to enter fractions that contain
// spaces before and after each / character

# include <stdio.h>

int input_test(void);

 

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    printf("Enter first fraction: "); // 5/6
    scanf("%d /%d", &num1, &denom1);   // num1 = 5, denom1 = 6

    printf("Enter second fraction: ");// 3/4
    scanf("%d /%d", &num2, &denom2);   // num2 = 3, denom2 = 4

    result_num = num1 * denom2 + num2 * denom1; // 5 * 4 + 3 * 6 = 38
    result_denom = denom1 * denom2;             // 6 * 4 = 20

    printf("The sum is %d/%d\n", result_num, result_denom); // 38/20
       
    input_test(); 

    return 0;
}
