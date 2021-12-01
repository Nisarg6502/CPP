#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b; 
    public:
        Base(int inp){
            a = inp;
        }
        Base(){};
};

class Derived: protected Base{
    public:
        void print(int id){
            a = id;
            cout<<a<<endl;
        }
};

int main()
{
    Base q(6);
    Derived w;
    w.print(7);
    return 0;
}