#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    // if (a < b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    swap(a,b);

    cout << a << " " << b;
    return 0;
}