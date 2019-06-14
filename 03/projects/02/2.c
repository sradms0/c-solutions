#include <stdio.h>

int main(void)
{
    int item_number = 0,
        month = 0,
        day = 0,
        year = 0;

    float unit_price = 0.0f;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d\n", 
            item_number, unit_price, month, day, year);

    return 0;
}
