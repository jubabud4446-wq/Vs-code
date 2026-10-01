#include <iostream>
using namespace std;

class Numpair
{
    int a, b;
    public:
        Numpair(int x, int y)
        {
            a = x;
            b = y;
        }
    friend bool is_divisor(const Numpair& p);
};
bool is_divisor(const Numpair& p)
{
    if (p.a % p.b == 0) return true;
    if (p.b % p.a == 0) return true;
    return false;
}
int main()
{
    Numpair a(2, 5);
    Numpair b(3, 6);

    cout << is_divisor(a) << endl;
    cout << is_divisor(b) << endl;

    return 0;
}