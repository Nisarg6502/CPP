#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printData(){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    Complex A,B,C;

    A.setData(6,13);
    A.printData();
    B.setData(22,19);
    B.printData();

    C.setDataBySum(A,B);
    C.printData();

    return 0;
}