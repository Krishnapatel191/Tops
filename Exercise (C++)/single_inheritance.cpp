#include<iostream>
using namespace std;
/*
inheritance: acquiring the function or attribute of another class
person
name
age
|
|
|
student
employee
customer
public : accessible everywhere
private : accessible within the class
protected : accesible in child class
*/

class person
{
    protected :
     string name="krishna";
    public:
    void displayperson(){
        cout<<"name is "<<name<<endl;
    }
};

class student:public person{
    public:
    int marks;


    void displayMarks(){
        cout<<"marks is "<<marks<<endl;
    }
};
int main(){
    student s1;
    //s1.name="Krishna";
    s1.displayperson();
    s1.marks=80;
    s1.displayMarks();

    return 0;

}