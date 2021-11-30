#include <iostream>
using namespace std;

class Dest{
    
    static int count;
    public:
        Dest(){
            count++;
            cout<<"This is the time when constructor is called for object "<<count<<endl;
        }
        ~Dest(){
            cout<<"This is the time when destructor is called for object "<<count<<endl;
        }
};

int Dest :: count;

int main()
{
    Dest d1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two objects"<<endl;
        Dest d2, d3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main";
    return 0;
}

//destructor is used to free memory of objects after they have served their purpose