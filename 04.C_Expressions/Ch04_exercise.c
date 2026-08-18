// Expressions
#include <stdio.h>

int main(void){
    
    int i, j, k;
    i = 5;
    j = 3;

    printf("%d %d\n", i/j, i%j);
    // output: 1, 2 

    printf("%d\n", (i + 10) % j);  
    // output: 0
    
    k = 9; j = 8; i = 7;
    printf("%d\n", (i+10) % k / j);
    // output: 2

    i = 1; j = 2; k =3;
    printf("%d\n", (i + 5) % (j + 2) / k);
    // output: 0

    return 0;
}

oops
