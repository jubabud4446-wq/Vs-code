#include <bits/stdc++.h>
using namespace std;

class Number
{
    int num;
    public:
    Number(int n)
    {
        num = n;
    }
    friend bool is_even(Number n);
};

bool is_even(Number n)
{
    return (n.num % 2 == 0);
}

int main()
{
    Number n1(50);  
    if(is_even(n1))
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
    return 0;
}