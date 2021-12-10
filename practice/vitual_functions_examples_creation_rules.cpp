#include <iostream>
#include <cstring>
using namespace std;

class LITM
{
protected:
    string title;
    float rating;

public:
    LITM(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() //display of derived class will work if claled by pointer and pointed towards base class through dedrived
    {
        cout << "Bogus code" << endl;
    }
};

class LITMBook : public LITM
{
    int videolength;

public:
    LITMBook(string s, float r, int vl) : LITM(s, r), videolength(vl)
    {
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars " << endl;
        cout << "The length of the video is: " << videolength << endl;
    }
};
class LITMText : public LITM
{
    int wordcount;

public:
    LITMText(string s, float r, int wc) : LITM(s, r), wordcount(wc)
    {
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Length of this text tutorial is: " << wordcount << " words" << endl;
    }
};

int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;

    //for video
    title = "Lost in the Memory";
    vlen = 6.13;
    rating = 3.16;
    LITMBook book(title, rating, vlen);
    book.display();

    LITMText text("Lost in the memory book", 4.13, 6.0);
    text.display();

    LITM *tut[2];
    tut[0] = &book;
    tut[1] = &text;

    tut[0]->display();
    tut[1]->display();

    return 0;
}

//rules for virtual functions
/*
    1. They cannot be static;
    2. They are accessible only by object pointers;
    3. Virtual functions can be a friend of ansother class;
    4. A virtual function in a base class might not be used;
    5. If a virtual function is defined in a base class, there is no necessity to redefine it in the derived class;
*/