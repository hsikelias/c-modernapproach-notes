// compute volume of a sphere with 10m radius, v = 4/3πr3
// actual answer = 4188.7902


#include <stdio.h>
#define PI 3.14159

int main(void){
    int radius = 10;

    printf("The volume of a sphere with %d-meter radius is %f",radius,4.0f/3.0f*PI*radius*radius*radius); // 4/3 ouputs 3141.590000
                    // 4.0f/3.0f outputs 4188.786667 
                    // this happens because using int 4/3 truncates the decimal values, instead of 0.75 we get 1
    return 0;
}
