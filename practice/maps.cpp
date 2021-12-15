#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Nisarg"] = 60;
    marksMap["Nature"] = 13;
    marksMap["Environment"] = 19;

    marksMap.insert({{"Prakriti", 89}, {"Shrishti", 56}});

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}