#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //Function Objects:Function wrapped in a class so that it is available like an object
    int arr[] = {1, 22, 3, 13, 5, 6, 7};
    sort(arr, arr + 3, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}