#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("file_io.txt");
    out << "This is me";
    out << "Next line pe likha hai ye maine";
    out.close();

    ifstream in;
    string st, st2;
    in.open("file_io.txt");
    in >> st >> st2;
    cout << st << st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}