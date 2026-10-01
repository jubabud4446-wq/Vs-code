#include <bits/stdc++.h>
using namespace std;

class Counter
{
    int count;
    public:
    Counter(int c)
    {
        count = c;
    }
    ~Counter()
    {
        cout << "Final count: " << count << endl;
    }
};

int main()
{
    Counter c(10);
    return 0;
}