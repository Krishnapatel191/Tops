#include <stdio.h>

int bill(int units)
{
    if (units <= 100)
        return units * 2;
    else if (units <= 200)
        return (100 * 2) + ((units - 100) * 3);
    else
        return (100 * 2) + (100 * 3) + ((units - 200) * 5);
}

int main()
{
    int units;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    printf("Total Bill = Rs. %d", bill(units));

    return 0;
}

#include<stdio.h>
float calculateBill(int units){
    if(units<=100){
        else if(units<=200){
            return(units*3);
        }else{
            return(units*5);
        }
    }
}