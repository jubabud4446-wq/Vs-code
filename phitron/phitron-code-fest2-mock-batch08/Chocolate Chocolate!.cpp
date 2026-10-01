#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int chocolate = n / 5;
        int wrappers = chocolate;

        while (wrappers >= 3)
        {
            int extra = wrappers / 3;
            int rem = wrappers % 3;

            chocolate += extra;
            wrappers = extra + rem;
        }

        cout << chocolate << endl;
    }

    return 0;
}