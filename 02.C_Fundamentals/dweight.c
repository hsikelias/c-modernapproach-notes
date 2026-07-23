// Computing the Dimensional Weight of a Box


#include <stdio.h>

int main(){
        int height, length, width, volume, weight;

        length = 12;
        width = 8;
        height = 10;
        
        volume = height * length * width;
        /* weight = volume/166; // answer = 5 though actual is around 5.783, rounds down the */ 
                             // value instead of rounding up
        
        weight = (volume + 165) / 166;
        
        printf("Dimensions: %dx%dx%d\n",length, width, height);
        printf("Volume: %d\n",volume);
        printf("Dimesnional Weight: %d\n", weight);

        return 0;
}
