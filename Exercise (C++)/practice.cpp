#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_no;
 
};
int main (){
    Student s1;
    s1.name="krishna";
    s1.age=21;
    s1.roll_no=1234;


    cout<<"roll_no :"<<s1.roll_no<<endl;
    

return 0;

}