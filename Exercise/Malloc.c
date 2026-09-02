#include<stdio.h>
#include<stdlib.h>
/*
Malloc : Dynamic memory alloction
room 1=?
room 2=?
room 3=?


calloc : Dynamic memory alloction
room 1=0
room 2=0
room 3=0

*/

int main(){
    int n;
    printf("enter number of students  ?");
    scanf("%d",&n);

    int *marks =(int *) malloc (n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        printf("\n%d",marks[i]);
    }
    return 0;

}