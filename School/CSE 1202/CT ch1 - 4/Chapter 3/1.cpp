#include <bits/stdc++.h>
using namespace std;

class Number
{
    int num;
    public:
    void set_value(int x)
    {
        num = x;
    }
    friend bool is_even(Number a);
};

bool is_even(Number a)
{
    if(a.num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    Number n;
    n.set_value(10);

    if(is_even(n))
        cout << "The number is even" << endl;
    else
        cout << "The number is odd" << endl;
    
    return 0;
}