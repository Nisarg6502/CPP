#include <iostream>
using namespace std;

// float avg(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float avg(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

int main()
{
    float average = avg(13.0, 6.0);
    float average2 = avg(13, 6.0);
    float average3 = avg(13, 6);
    cout << average << endl
         << average2 << endl
         << average3 << endl;
    int x = 6, y = 13;
    swapp(x, y);
    cout << x << endl
         << y << endl;
    return 0;
}