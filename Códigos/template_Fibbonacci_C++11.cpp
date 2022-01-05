using namespace std;



template <int n>
struct Fibonacci
{
    static constexpr int value = Fibonacci<n - 1>::value + Fibonacci<n - 2>::value;
};

template <>
struct Fibonacci<0>
{
    static constexpr int value = 0;
};

template <>
struct Fibonacci<1>
{
    static constexpr int value = 1;
};

int main()
{
    cout << Fibonacci<8>::value << endl;
    return 0;
}
