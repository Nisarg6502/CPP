#include <iostream>
using namespace std;

//Syntax for inheriting in multiple inheritance
/*
class Derived: visibility-mode base1, visibility-mode base2
{
    Class body of class Derived
}
*/

class Base1{
    protected:
        int baseInt1;
    public:
        void set_baseInt1(int a){
            baseInt1 = a;
        };
};
class Base2{
    protected:
        int baseInt2;
    public:
        void set_baseInt2(int a){
            baseInt2 = a;
        };
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of Base1 is "<<baseInt1<<endl;
            cout<<"The value of Base2 is "<<baseInt2<<endl;
            cout<<"The sum of these values is "<<baseInt1 + baseInt2<<endl;
        }
};

int main()
{
    Derived d;
    d.set_baseInt1(6);
    d.set_baseInt2(13);
    d.show();
    return 0;
}