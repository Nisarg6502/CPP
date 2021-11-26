#include <iostream>
using namespace std;

//forward declaration
class Complex;

class Calculator{
    public:
        // int add(int a, int b){
        //     return (a+b);
        // };
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;
    //individually declaring functions as friends
    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumCompComplex(Complex, Complex);
    
    //Aliter: Declaaring the entire class as friend
    friend class Calculator;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        };

        void print(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
        return (o1.a + o2.a);
};

int Calculator :: sumCompComplex(Complex o1, Complex o2){
        return (o1.b + o2.b);
};

int main()
{
    Complex a,b;
    a.setNumber(6,13);
    a.print();
    b.setNumber(60,31);
    b.print();
    Calculator calc;
    int result = calc.sumRealComplex(a,b);
    cout<<"The real addition is "<<result<<endl;
    int resultComp = calc.sumCompComplex(a,b);
    cout<<"The real addition is "<<resultComp<<endl;
    return 0;
}