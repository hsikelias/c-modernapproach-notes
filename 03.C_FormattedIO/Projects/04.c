#include <stdio.h>

int main(void){
    int group1, group2, group3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("( %d) %d- %d",&group1,&group2,&group3);
    
    printf("%.3d.%.3d.%.4d",group1,group2,group3);

    return 0;
}
