#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int *b;
    b = &a;
    cout<<"a:"<<&a<<endl;
    cout<<"hello: "<<*b;
    return 0;
}