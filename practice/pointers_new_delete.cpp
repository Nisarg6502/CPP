#include <iostream>
using namespace std;

int main()
{
    //new operator
    // int *p = new int(13);
    float *p = new float(6.22);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value at arr[0] is " << arr[0] << endl;
    cout << "The value at arr[1] is " << arr[1] << endl;
    cout << "The value at arr[2] is " << arr[2] << endl;

    return 0;
}