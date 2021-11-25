#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(){
            cout<<"Enter Employee id number"<<endl;
            cin>>id;
            count++;
        };
        void getData(){
            cout<<"Employee id is: "<<id<<" and this is the employee count: "<<count<<endl;
        }; 
        static void getCount(){
            cout<<"The value of count is: "<<count<<endl; //static member functions can only access static data members 
        }
};

int Employee :: count;

int main()
{
    Employee A[4]; //creates array of objects
    for (int i = 0; i < 4; i++)
    {
        A[i].setData();
        A[i].getData();
        A[i].getCount();
    }

    return 0;
}