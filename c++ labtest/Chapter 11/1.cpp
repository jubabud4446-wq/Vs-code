#include <bits/stdc++.h>
using namespace std;

template <class T> class Pair
{
    private:
    T a, b;

    public:
    Pair(T x, T y)
    {
        a = x;
        b = y;
    }
    T get_sum()
    {
        return a+b;
    }
};

int main()
{
    Pair<int> p(10,20);
    cout << p.get_sum() << endl;
    Pair<double> q(10.5, 19.5);
    cout << q.get_sum() << endl;

    return 0;
}