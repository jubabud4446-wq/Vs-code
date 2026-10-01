#include <bits/stdc++.h>
using namespace std;

class MathFunction
{
    public:
    virtual int evaluate(int x) = 0;
};

class Square : public MathFunction
{
    public:
    int evaluate(int x)
    {
        return x*x;
    }
};

class Cube : public MathFunction
{
    public:
    int evaluate(int x)
    {
        return x*x*x;
    }
};

int main()
{
    Square s;
    Cube c;

    cout << "Square: " << s.evaluate(5) << endl;
    cout << "Cube: " << c.evaluate(5) << endl;
    
    return 0;
}