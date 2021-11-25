#include <iostream>
using namespace std;

class binary
{
    string s;
    void check();

    public:
        void read();
        void onesCompliment();
        void display();
};

void binary :: read(){
    cout<<"Enter a binary string"<<endl;
    cin>>s;
}

void binary::check(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Not a binary number"<<endl;
        }
    }
}

void binary::onesCompliment(){
    cout<<"one's compliment"<<endl;
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        } 
    }
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main()
{
    binary b;
    b.read();
    // b.check();
    b.display();
    b.onesCompliment();
    b.display();
    return 0;
}