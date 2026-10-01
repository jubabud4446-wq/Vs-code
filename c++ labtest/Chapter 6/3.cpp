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
    Counter operator++()
    {
        ++count;
        return *this;
    }
    void display()
    {
        cout << "Count = " << count << endl;
    }
};

int main()
{
    Counter c(10);

    ++c;

    c.display();
    
    return 0;
}