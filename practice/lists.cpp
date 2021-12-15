#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; //list of 0 length
    // list<int> list2(); //empty list of size 6
    list<int> list2;
    list1.push_back(6);
    list1.push_back(13);
    list1.push_back(32);
    list1.push_back(19);
    list2.push_back(7);
    list2.push_back(73);
    list2.push_back(72);
    list2.push_back(79);

    list<int>::iterator iter = list1.begin();
    display(list1);
    display(list2);

    //sorting the list
    list1.sort();
    display(list1);

    //merging the lists
    list1.merge(list2);
    display(list1);

    //reversing lists
    list1.reverse();
    display(list1);

    list1.remove(6);
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    return 0;
}