
#include <iostream>

using namespace std;

constexpr int Fibbonacci(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return Fibbonacci(x - 2) + Fibbonacci(x - 1);
}

int main()
{
    cout << Fibbonacci(10); //Imprime 89
    return 0;
}
