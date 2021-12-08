#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 2;
    Shop *dukaan = new Shop[size];
    Shop *dukaaninitial = dukaan;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Id and price of item" << i + 1;
        cin >> p >> q;
        dukaan->setData(p, q);
        dukaan++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        dukaaninitial->getData();
        dukaaninitial++;
    }

    return 0;
}