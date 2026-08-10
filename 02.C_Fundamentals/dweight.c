// Computing the Dimensional Weight of a Box


#include <stdio.h>
#define INCHES_PER_POUND 166

int main(){
        int height, length, width, volume, weight;
        
        printf("Enter the height of box: ");
        scanf("%d",&height);
        
        printf("Enter the length of box: ");
        scanf("%d",&height);

        printf("Enter the width of box: ");
        scanf("%d",&width);

        volume = height * length * width;
        /* weight = volume/166; // answer = 5 though actual is around 5.783, 
         * rounds down the value instead of rounding up */
        
        weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
        
        printf("Volume: %d\n",volume);
        printf("Dimesnional Weight: %d\n", weight);

        return 0;
}
