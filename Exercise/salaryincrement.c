#include <stdio.h>

int main()
{
    int current_salary = 50000;
    int appraisal_amt = 5000;
    int Total_salary;

    Total_salary = current_salary + appraisal_amt;

    printf("Current Salary = %d\n", current_salary);
    printf("Appraisal Amount = %d\n", appraisal_amt);
    printf("Total Salary = %d\n", Total_salary);

    return 0;
}