#include<stdio.h>
/*
while loop
for ()
while
do while
When it is not confirmed how many times the loop will execute
*/
int main()
{
    int pin;

    while (pin!=1234){
        printf("\n Enter your pin:");
        scanf("%d",&pin);
    }

    printf("\n Login success!!!");
    return 0;
}