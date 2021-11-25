#include <iostream>
using namespace std;

class Shop
{
    int itemNumber[100];
    int itemPrice[100];
    int counter;

    public:
        void setInitCounter(){counter = 0;};
        void setPrice();
        void display();
};

void Shop::setPrice()
{
    cout<<"Enter ID of item no. "<<counter + 1<<endl;
    cin>>itemNumber[counter];
    cout<<"Enter price of item no. "<<counter + 1<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item "<<itemNumber[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    Shop dukaan;
    dukaan.setInitCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.display();
    return 0;
}