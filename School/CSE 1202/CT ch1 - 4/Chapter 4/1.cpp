#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    int mat[2][2];
    public:
    void input()
    {
        cout << "Enter 4 value: " << endl;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void determinant()
    {
        int det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
        cout << "Determinant = " << det << endl;
    }
};

int main()
{
    Matrix m;
    m.input();
    m.determinant();

    return 0;
}