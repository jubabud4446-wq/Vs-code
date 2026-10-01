#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int totalStudents = X * Y;

        if (Z * 2 > totalStudents)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}