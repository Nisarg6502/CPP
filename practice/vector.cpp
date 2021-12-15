#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << endl;
        cout << v.at(i) << endl;
    }
}

int main()
{
    //ways to create a vector
    vector<int> vec1; //zero length vector
    display(vec1);
    vector<char> vec2(6);    //6 element character vector
    vector<char> vec3(vec2); //6 element character vector from vec2
    vec3.push_back('T');
    display(vec3);
    vector<int> vec4(6, 13); //6 element vector of 13s
    display(vec4);
    cout << vec4.size() << endl;
    int element, size = 6;
    cout << "Enter the size of your vector" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 60, 566);
    // display(vec1);
    return 0;
}