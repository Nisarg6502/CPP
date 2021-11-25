#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
        friend Complex addTwo(Complex o1, Complex o2);//friend function is allowed to access private members of a class
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void printData(){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex addTwo(Complex o1, Complex o2){
    Complex o3;
    o3.setData(o1.a+o2.a,o1.b+o2.b);
    return o3;
}

int main()
{
    Complex A,B,C;

    A.setData(6,13);
    A.printData();
    B.setData(22,19);
    B.printData();

    C = addTwo(A,B);
    C.printData();

    return 0;
}

/*
Properties of a friend function
1. Not in the scope of a class
2. Cannot be called from the object of the class. Eg., C.addTwo() == Invalid
3. Can be invoked without the help of objects
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of a class
6. It cannot access the members directly by their names. They need object_name.member_name to access members.
*/