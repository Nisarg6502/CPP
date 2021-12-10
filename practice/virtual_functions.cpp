#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    virtual void display() //vitual functions
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable var_base" << endl;
        cout << "Displaying derived class variable var_derived" << var_derived << endl;
    }
};

int main()
{
    Base *baseptr;
    Base objbase;
    Derived objderived;
    baseptr = &objderived; //pointing base class to derived class late binding

    baseptr->var_base = 13;

    Derived *derivedptr;
    derivedptr = &objderived;

    derivedptr->var_derived = 6;
    derivedptr->var_base = 613;
    derivedptr->display();

    return 0;
}