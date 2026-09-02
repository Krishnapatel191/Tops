#include<stdio.h>
#include<string.h>
struct Student{
    int roll_no;
    char name[100];
    float marks;
};

int main(){
    struct Student s1;
    s1.roll_no=1;
    strcpy(s1.name,"Krishna");
    s1.marks=71.85;

    printf("\n roll no is %d",s1.roll_no);
    printf("\n name is %s",s1.name);
    printf("\n mark is %.2f",s1.marks);

    return 0;
}
