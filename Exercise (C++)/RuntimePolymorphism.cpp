#include<iostream>
using namespace std;
class Animal{
    public:
       virtual void sound(){
        cout<<"Animal sound"<<endl;
       }
};


class Dog : public Animal{

};
int main(){
    Animal*a;
    Dog d;
    a=&d;
    a->sound();
    return 0;
}
