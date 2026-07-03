
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
    int min;
    min=salary[0];
    for(int i=0;i<5;i++)
    {
        if(salary[i]<min)
        //if(min>salray[i])
        {
            min=salary[i];

        }

    }
    printf("\n min salary is %d",min);
    return 0;

}