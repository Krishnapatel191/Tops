#include <stdio.h>

int main()
{
    int price = 50;
    int quantity = 3;
    int total_price;

    total_price = price * quantity;

    printf("Price = %d\n", price);
    printf("Quantity = %d\n", quantity);
    printf("Total Price = %d\n", total_price);

    return 0;
}