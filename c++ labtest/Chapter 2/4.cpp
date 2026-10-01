#include <bits/stdc++.h>
using namespace std;

class Weight
{
    int grams;
    public:
    Weight(int g)
    {
        grams = g;
    }
    double gm_2_kg()
    {
        return (double)grams / 1000;
    }
};

int main()
{
    int gm;
    cout << "Enter gm: ";
    cin >> gm;

    Weight o1(gm);
    cout << gm << "gm = " << o1.gm_2_kg() << "kg" << endl;

    return 0;
}