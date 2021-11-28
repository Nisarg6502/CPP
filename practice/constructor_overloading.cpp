#include <iostream>
using namespace std;

class Complex{
    int x, y;
    public:
        Complex(int a, int b){
            x = a;
            y = b;
        }
        Complex(int a){
            x = a;
            y = 0;
        }
        Complex(){
            x = 0;
            y = 0;
        }
        void print(){
            cout<<"The complex number is "<<x<<" + "<<y<<"i"<<endl;
        }
};

int main()
{
    Complex c1(3,4);
    c1.print();
    Complex c2(4);
    c2.print();
    Complex c3;
    c3.print();
    return 0;
}