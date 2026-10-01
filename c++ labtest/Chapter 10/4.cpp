#include <bits/stdc++.h>
using namespace std;

class Sequence
{
    protected:
    int val;
    public:
    virtual int next_term() = 0;
    void set_val(int v)
    {
        val = v;
    }
};

class ArithmeticSequence : public Sequence
{
    int num = 2;
    public:
    int next_term()
    {
        return  val += num;
    }
};

int main()
{
    ArithmeticSequence o1;
    o1.set_val(10);
    
    cout << o1.next_term() << endl;
    cout << o1.next_term() << endl;
    cout << o1.next_term() << endl;
    cout << o1.next_term() << endl;

    return 0;
}