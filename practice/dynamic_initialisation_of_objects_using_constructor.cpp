#include <iostream>
using namespace std;

class Interest{
    int p, t;
    float R, r, ReturnValue;
    public:
        Interest();
        Interest(int p1, int r1, int t1);
        Interest(int p1, float R1, int t1);
        void print();
};

Interest :: Interest(){
    
};

Interest :: Interest(int p1, int r1, int t1){
            p = p1;
            r = float(r1)/100;
            t = t1;
            ReturnValue = p;
            for (int i = 0; i < t; i++)
            {
                ReturnValue = ReturnValue*(1+r);
            }
            
        }
Interest :: Interest(int p1, float R1, int t1){
            p = p1;
            R = R1;
            t = t1;
            ReturnValue = p;
            for (int i = 0; i < t; i++)
            {
                ReturnValue = ReturnValue*(1+R);
            }
        }

void Interest ::print(){
    cout<<"The principal amount was"<<p<<endl<<"After "<<t<<" years, the return value is: "<<ReturnValue;
}

int main()
{
    Interest a1, b1;
    int p, r, t;
    float R;

    cout<<"Enter p, r, t"<<endl;
    cin>>p>>r>>t;
    a1 = Interest(p,r,t);
    a1.print();

    cout<<"Enter p, R, t"<<endl;
    cin>>p>>R>>t;
    b1 = Interest(p,R,t);
    b1.print();
    
    return 0;
}