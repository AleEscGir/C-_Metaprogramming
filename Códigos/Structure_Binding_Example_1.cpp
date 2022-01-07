
#include <iostream>
#include <tuple>


using namespace std;

int main()
{
    // Usando la clase tupla
    int a, b, c;
    tie(a, b, c) = make_tuple(1, 2, 3);
}
