#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Nisarg
{
public:
    T1 a;
    T2 b;
    T3 c;
    Nisarg(T1 x, T2 y) : a(x), b(y)
    {
    }
    Nisarg(T1 x, T2 y, T3 z) : a(x), b(y), c(z)
    {
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    Nisarg<> n(6, 6.13);
    Nisarg<> ni(6, 6.13, 'n');
    Nisarg<char, char, char> nis('n', 'i', 's');
    n.display();
    ni.display();
    nis.display();
    return 0;
}