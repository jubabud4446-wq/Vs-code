#include <bits/stdc++.h>
using namespace std;

class Distance
{
    int meter;
    public:
    void set(int m)
    {
        meter = m;
    }
    void display()
    {
        cout << meter << " meters" << endl;
    }
};

int main()
{
    Distance d[3];

    for(int i = 0; i < 3; i++)
    {
        int m;
        cout << "Enter distance " << i+1 << ": ";
        cin >> m;
        d[i].set(m);
    }

    cout << "\nDistances:\n";

    for (int i = 0; i < 3; i++)
    {
        d[i].display();
    }
    
    return 0;
}