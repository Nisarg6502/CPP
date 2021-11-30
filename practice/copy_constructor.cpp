#include <iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        //when no copy constructor is found, the compiler provides its own copy constructor
        Number(Number &obj){
            cout<<"Copy Constructor is called!"<<endl;
            a = obj.a;
        }
        void print(){
            cout<<"The number entered is "<<a<<endl;
        }
};

int main()
{
    Number q, w(13), e(6), t;
    q.print();
    e.print();

    Number r(w); //copy constructor invoked
    r.print();    

    t = e; //copy constructor not invoked in assignment because the object has been already initialised

    Number y = w; //copy constructor invoked while initialising 

    
    return 0;
}