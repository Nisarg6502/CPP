#include <iostream>
using namespace std;

/*Case1:
class B: public A{
    Order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, public C{
    Order of execution of constructor -> B() then C() then A()
};

Case 3: 
class A: public B, virtual public C{
    Order of ecxecution of constructor -> C() then B() then A()
};
*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printData1(){
            cout<<"The value of data is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printData2(){
            cout<<"The value of data is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base2(a), Base1(b){ //order as per declaring
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor is called"<<endl;
        }

        void printDataD(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived nisarg(1,2,3,4);
    nisarg.printDataD();
    return 0;
}