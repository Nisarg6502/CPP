#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    ptr->setData(6, 13); //in paranthesis coz . operator has a higher preference than *
    // (*ptr).getData();
    ptr->getData();

    //Array of objects
    Complex *ptr1 = new Complex[4];
    for (size_t i = 0; i < 4; i++)
    {
        (ptr1 + i)->setData(i, 4 + i);
        (ptr1 + i)->getData();
    }

    return 0;
}