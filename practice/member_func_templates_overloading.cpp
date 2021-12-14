#include <iostream>
using namespace std;

template <class T>
class Nisarg
{
public:
    T data1;
    Nisarg(T a) : data1(a)
    {
    }
    void display();
};

template <class T>
void Nisarg<T>::display()
{
    cout << data1 << endl;
}

void func(int a)
{
    cout << "I am the first func() exact" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am the first func()" << a << endl;
}
int main()
{
    // Nisarg<float> n(6.13);
    // Nisarg<char> ni('6');
    // Nisarg<bool> nis(false);
    // n.display();
    // ni.display();
    // nis.display();
    func(4.0); //exact match takes the highest priority
    return 0;
}