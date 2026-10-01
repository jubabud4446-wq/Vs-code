#include <bits/stdc++.h>
using namespace std;

template <class x> class Pair
{
    x a, b;
    public:
    Pair(x a, x b)
    {
        this->a = a;
        this->b = b;
    }

    x get_sum()
    {
        return a+b;
    }
};

int main()
{
    Pair<double> a(10.3, 12.2);
    Pair<int> b(12, 10);

    cout << "a_sum = " << a.get_sum() << endl;
    cout << "b_sum = " << b.get_sum() << endl;

    return 0;
}