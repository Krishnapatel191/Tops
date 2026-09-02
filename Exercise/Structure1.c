#include<stdio.h>
#include<string.h>
struct Employee{
    int emp_id;
    float salary;
    char emp_name[50];
};
int main(){
    struct  Employee emp;
    emp.emp_id=1;
    emp.salary=150000;
    strcpy(emp.emp_name,"Krishna");
    printf("\nemp id is %d",emp.emp_id);
    printf("\nsalary is %.2f",emp.salary);
    printf("\nemp name is %s",emp.emp_name);
    return 0;
    
    
}