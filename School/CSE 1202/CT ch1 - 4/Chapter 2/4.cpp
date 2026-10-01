#include <bits/stdc++.h>
using namespace std;

class Weight
{
    int grams;
    public:
    Weight(int w)
    {
        grams = w;
    }
    int kilo(int a)
    {
        return a/1000;
    }
};

int main()
{
    int w;
    cout << "Enter value (gm): ";
    cin >> w;

    Weight a1(w);
    cout << a1.kilo(w) << endl;

    return 0;
}


// Mirdha Bari Road
// Mahshania Jame Masjid