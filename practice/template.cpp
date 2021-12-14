#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m) : size(m)
    {
        arr = new T[size];
    }
    int dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> V1(3);
    V1.arr[0] = 4.6;
    V1.arr[1] = 13.13;
    V1.arr[2] = 6.13;
    vector<float> V2(3);
    V2.arr[0] = 1.3;
    V2.arr[1] = 0.6;
    V2.arr[2] = 3.2;
    double a = V1.dotProduct(V2);
    cout << a << endl;
    return 0;
}