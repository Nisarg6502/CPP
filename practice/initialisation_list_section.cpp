#include <iostream>
using namespace std;

/*
Syntax for initialisation list in constructor:
constructor (argument-list) : initialisation-section
{
    assignment + other code;
}

class Test{
    int a, b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body};
};
*/

class Test
{
    int a, b;

public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i + j)
    //Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a + j)
    //Test(int i, int j) : b(a + j), a(i + b) not gonna work coz a is initialised first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "constructor-body" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    };
};

int main()
{
    Test t(6, 13);
    return 0;
}