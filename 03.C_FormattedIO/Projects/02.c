#include <stdio.h>

int main (void)
{
    int item_no, year, month, day;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_no);

    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy)");
    scanf("%d/ %d/ %d",&month,&day,&year);


    printf("Item\t\t\tUnit\t\t\tPurchase\n\t\t\tPrice\t\t\tDate\n");

    printf("%d\t\t\t$%7.2f\t\t%.2d/%.2d/%d",item_no,unit_price,month,day,year);
    return 0;
}
