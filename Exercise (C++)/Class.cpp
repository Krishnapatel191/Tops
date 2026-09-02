/*
class : class is a collection data member and member function
blurprint


Object : gives permission to access functionality of class

employee
class
id 
name
salary


object
krishna
velcy
*/

#include<iostream>
using namespace std;
class Employee{
    public:
    int emp_id;
    string emp_name;
    int salary;
};
int main(){
    Employee e1;//object created
    e1.emp_id=1;
    e1.emp_name="krishna";
    e1.salary=50000;


    cout<<"employee id is "<<e1.emp_id<<endl;
    cout<<"employee name is "<<e1.emp_name<<endl;
    cout<<"employee salary is "<<e1.salary;
    return 0;
}