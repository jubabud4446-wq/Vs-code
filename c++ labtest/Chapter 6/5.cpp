#include <bits/stdc++.h>
using namespace std;

class Distance
{
    int feet, inch;
    public:
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    bool operator<(Distance &c)
    {
        int total1 = feet*12 + inch;
        int total2 = c.feet*12 + c.inch;
        return total1 < total2;
    }
};

int main()
{
    Distance o1(5,5), o2(6,2);

    if(o1<o2)
        cout << "True" << endl;
    else
        cout << "False" << endl;
        
    return 0;
}