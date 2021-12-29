
#include <iostream>

using namespace std;

class Point
{
    public:
    double x;
    double y;

    constexpr Point(double in_x, double in_y) : x(in_x), y(in_y) 
    {    
    }
    
};

constexpr Point Middle_Point(Point a, Point b)
{
    double new_x = (a.x + b.x) / 2;
    double new_y = (a.y + b.y) / 2;
    return Point(new_x, new_y);
}



int main()
{
    constexpr Point a = Point(0, 0);
    constexpr Point b = Point(1, 1);
    constexpr Point c = Middle_Point(a, b);
    cout << c.x; //Imprime 0.5
    cout << "\n";
    cout << c.y; //Imprime 0.5
    return 0;
}
