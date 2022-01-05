using namespace std;



template < int n>
struct myfor
{
    static const int sum = n + myfor <n - 1 >::sum;
};

template <>
struct myfor <1>
{
    static const int sum = 1;
};


int main()
{    
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += i;
    }

    cout << sum << endl;
    cout << myfor<5>::sum << endl;
    
    return 0;
};
