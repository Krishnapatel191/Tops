#include<stdio.h>
/*
nested loop:
1st loop:row
2nd loop:colum
*/
int main()
{
    for(int i=1; i<=3;i++) {
        for(int j=1;j<=5;j++){
            printf("\n class %d student %d present",i,j);
        }
    }
    return 0;
}