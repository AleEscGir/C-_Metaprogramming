
#include <iostream>

using namespace std;

int main()
{
	
}

// Template para realizar la recursión
// usando variadic template

auto C11_sum()
{
	return 0;
}

template<typename T1, typename... T>
auto C11_sum(T1 s, T... ts)
{
	return s + C11_sum(ts...);
}
