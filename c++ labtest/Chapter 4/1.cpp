#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    int a[2][2];
    public:
    void input()
    {
        cout << "Enter 4 num: ";

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void dim()
    {
        int det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        cout << "Determinant = " << det << endl;
    }
};

int main()
{
    Matrix m;

    m.input();
    m.dim();

    return 0;
}