#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, z;
    cin >> n;

    int temp_x = 0, temp_y = 0, temp_z = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        temp_x += x;
        temp_y += y;
        temp_z += z;
    }

    if(temp_x == 0 && temp_y == 0 && temp_z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}