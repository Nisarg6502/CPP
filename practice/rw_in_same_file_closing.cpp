#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //connecting our file with hout stream
    ofstream hout("file_io.txt");

    //creating a name string and filling it with the string entered by the user
    cout << "Enter your name";
    string name;
    cin >> name;

    //writing string to the file
    hout << "My name is " + name;
    hout.close();

    ifstream hin("file_io.txt");
    string content;
    hin >> content;
    getline(hin, content);
    cout << "The content of the file is: " << content;
    hin.close();

    return 0;
}