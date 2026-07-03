#include<stdio.h>
int main()
{
    int menu=3;
    switch(menu)
    {
        case 1:
        printf("Pizza");
        break;
        case 2:
        printf("Burger");
        break;
        case 3:
        printf("Nooldes");
        break;
        case 4:
        printf("Ice-cream");
        break;
        default:
        printf("Invalid choice");


    }

    return 0;
}