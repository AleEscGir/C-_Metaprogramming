
#include <iostream>

using namespace std;

int main()
{
	
}

int sum(int num, ...)
{
	va_list valist;

	int s = 0, i;

	va_start(valist, num);
	for (i = 0; i < num; i++)
		s += va_arg(valist, int);

	va_end(valist);

	return s;
}

