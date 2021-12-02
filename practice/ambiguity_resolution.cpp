#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};

class Derived: public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base2 :: greet(); //removes ambiguity
    }
};

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D: public B{
    int a;
    public:
        void say(){ //new say() method will override base class's say() method 
            // cout<<"Hello World, how are you?"<<endl;
            // B ::say();
        }
};

int main()
{
    //Ambiguity 1
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();   
    // obj2.greet();   

    // Derived obj3;
    // obj3.greet();

    //Ambiguity2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}