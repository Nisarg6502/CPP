#include <iostream>
using namespace std;

class Y;

class X{
    int data;
    friend void add(X,Y);
    public:
        void set(int value){
            data = value;
        };
};

class Y{
    int num;
    friend void add(X, Y);
    public:
        void set(int value){
            num = value;
        };
};

void add(X o1, Y o2){
    cout<<"Addition of two numbers X and Y is: "<<o1.data + o2.num<<endl;
}

int main()
{
    X x;
    x.set(6);
    Y y;
    y.set(13);
    add(x, y);
    return 0;
}