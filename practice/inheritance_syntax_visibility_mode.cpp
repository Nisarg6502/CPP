#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
        int salary;
        Employee(){};
        Employee(int inpId){
            id = inpId;
            salary = 13;
        }
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becaomes the private members of the derived class
3. Public visibility mode: Public members of the base class becomes the public members of the derived class
4. Private members are never inherited
*/

//Creating a class Programmer derived from class Employee
class Programmer : public Employee{
    public:
        Programmer(int inpId){
            id = inpId;
        }
        void getData(){
            cout<<id<<endl;
        }
        int languageCode = 9;
};

int main()
{
    Employee N(1), T(2);
    cout<<N.salary<<endl;
    cout<<T.salary<<endl;
    Programmer skill(7);
    cout<<skill.id<<endl;
    cout<<skill.languageCode<<endl;
    skill.getData();
    return 0;
}