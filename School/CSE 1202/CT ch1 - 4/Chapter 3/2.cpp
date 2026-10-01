#include <bits/stdc++.h>
using namespace std;

class Distance
{
    int meters;
    public:
    void set_value(int num)
    {
        meters = num;
    }
    void show_value()
    {
        cout << meters << "m" << endl;
    }
};

int main()
{
    Distance D[3];

    for(int i = 0; i < 3; i++)
    {
        int m;
        cout << "Enter distance " << i+1 << endl;
        cin >> m;
        D[i].set_value(m);
    }

    cout << "\nDistance:\n";
    for(int i = 0; i < 3; i++)
        D[i].show_value();
    
    return 0;
}