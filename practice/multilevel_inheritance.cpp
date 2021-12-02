#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_num;
    public:
        void set_roll(int);
        void get_roll(void);
};

void Student :: set_roll(int r){
    roll_num = r;
}

void Student :: get_roll(){
    cout<< "The roll number is "<<roll_num<<endl;
}

class Exam : public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        };
};


int main()
{
    Result harry;
    harry.set_roll(06);
    harry.set_marks(60.0, 80);
    harry.display();
    return 0;
}