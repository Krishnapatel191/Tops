#include <stdio.h>

int main () 
{
    int current_amount=12000,deposit=5000,withdraw=1500;
    int new_account_balance=current_amount+deposit;
    printf("\nAfter deposit balance is :%d",new_account_balance);
    int after_withdraw=new_account_balance-withdraw;
    printf("\nAfter withdrawl  :%d",after_withdraw);
    return 0;

}