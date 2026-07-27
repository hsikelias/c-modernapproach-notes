#include <stdio.h>
#define PI 3.14159

int main(void){
    int radius, volume;

    printf("Enter the radius of the sphere:");
    scanf("%d", &radius);

    volume = (4.0f/3.0f)*PI*(radius * radius * radius); 

    printf("The volume of a sphere with %d-meter radius is %f",radius, volume);

    return 0;
}
