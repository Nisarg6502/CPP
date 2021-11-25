#include <iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;

    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Nisarg;
    Nisarg.setData(6,13,21);
    Nisarg.d = 15;
    Nisarg.e = 22;
    Nisarg.getData();
    return 0;
}