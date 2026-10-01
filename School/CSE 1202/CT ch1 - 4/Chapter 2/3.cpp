#include <bits/stdc++.h>
using namespace std;

class Counter
{
    int count;
    public:
    Counter(int a)
    {
        count = a;
    }
    ~Counter()
    {
        cout << count;
    }
};

int main()
{
    int num;
    cin >> num;

    Counter a1(num);

    return 0;
}