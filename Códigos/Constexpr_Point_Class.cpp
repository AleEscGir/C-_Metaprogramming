
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

int main()
{
    constexpr Point a = Point(0, 0); //Se crea este Point en tiempo de Compilación
    Point b = Point(1, 1);           //Se crea este Point en tiempo de Ejecución
    return 0;
}
