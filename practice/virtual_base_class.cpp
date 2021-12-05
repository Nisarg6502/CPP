#include <iostream>
using namespace std;

/*
    student -->Test
    student -->sports
    test -->result
    sports -->result
*/

//virtaual base class removes ambiguity and takes only one copy of the base class

class Student{
    protected:
        int roll_no;
    public:
        void set_numer(int a){
            roll_no = a;   
        }
        void print_number(){
            cout<<"Your roll num is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"Your result is here: "<<endl<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected: 
        float score;
    public:
        void set_score(float s1){
            score = s1;
        };
        void print_score(){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float result;
    public:
        void display(){
            result = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total result is: "<<result<<endl;
        }
};

int main()
{
    Result Nisarg;
    Nisarg.set_numer(6);
    Nisarg.set_marks(61.3, 13.6);
    Nisarg.set_score(22);
    Nisarg.display();
    return 0;
}