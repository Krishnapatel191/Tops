/*
1 parent multiple child
*/
#include<iostream>
using namespace std;

/*
Abstraction: Details are hidden, only essential information is shown.
*/

class form
{
public:
    virtual void submit() = 0;   // Pure virtual function
};

class admissionform : public form
{
public:
    void submit() override
    {
        cout << "Admission form submitted!!" << endl;
    }
};

class jobform : public form
{
public:
    void submit() override
    {
        cout << "Job form submitted!!" << endl;
    }
};

int main()
{
    admissionform a1;
    jobform j1;

    form *f1 = &a1;
    form *f2 = &j1;

    f1->submit();
    f2->submit();

    return 0;
}