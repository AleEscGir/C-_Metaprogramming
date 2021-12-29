
#include <iostream>

using namespace std;

struct My_Struct
{
    typedef int test_int;
};

template <typename T>
string function(typename T::test_int)
{
    return "First function success";
}


template <typename T>
string function(T)
{
    return "Second function success";
}

int main()
{
    cout << function<My_Struct>(0);  //Imprime: "First function success"
    cout << "\n";
    cout << function<int>(0);        //Imprime: "Second function success";
    cout << "\n";
    cout << function<char>(0);       //Imprime: "Second function success";
    cout << "\n";
    return 0;
}
