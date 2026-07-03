#include<stdio.h>
/*
maximum salary
input
process
max=first val 45000
max
*/
int main()
{
    int salary [5]={1000,2000,500,3000,5000};
    int max;
    max=salary[0];
    for(int i=0;i<5;i++)
    {
        if(max<salary[i])
        {
            max=salary[i];

        }

    }
    printf("\n maximum salary is %d",max);
    return 0;

}