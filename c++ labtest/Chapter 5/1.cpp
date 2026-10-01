#include <bits/stdc++.h>
using namespace std;

class MathOperations
{
    public:
    int multiply(int a, int b)
    {
        return a*b;
    }
    int multiply(int a, int b, int c)
    {
        return a*b*c;
    }
};

int main()
{
    MathOperations o1;

    cout << o1.multiply(3, 2) << endl;
    cout << o1.multiply(3, 2, 3) << endl;

    return 0;
}