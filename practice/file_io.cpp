#include <iostream>
#include <fstream>
using namespace std;

/*
The useful classes for working with files in cpp are:
1.fstreambase 
2.ifstream--> derived from fstreambase
3.ofstream --> derived from fstreambase 
*/

/*
In order to work with files in cpp, you will have to open it. Primarily, there are 2 ways to open a file:
1. using a constructor
2. using a member function open() of the class
*/

int main()
{
    string st = "the dark knight", st2;
    //opening files using constructor and writing it
    ofstream out("file_io.txt"); //write operation
    out << st;

    //opening files using constructor and reading it
    ifstream in("file_io2.txt"); //read operation
    in >> st2;
    cout << st2;

    return 0;
}