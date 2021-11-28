#include <iostream>
#include <math.h>

using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        friend void Dist(Point, Point);
};

void Dist(Point o1, Point o2){
    int dist = sqrt(pow((o1.x - o2.x),2) + pow((o1.y - o2.y),2));
    cout<<"The distance between points ("<<o1.x<<","<<o1.y<<") & ("<<o2.x<<","<<o2.y<<") is: "<<dist<<endl;
}

int main()
{
    Point p1(0,2), p2(2,2);
    Dist(p1,p2);
    return 0;
}