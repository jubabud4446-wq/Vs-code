#include <bits/stdc++.h>
using namespace std;

class line
{
    int len;
    public:
        line(int x);
};

line::line(int x)
{
    len = x;
    for(int i = 0; i < len; i++)
    {
        cout << "*";
    }
}

int main()
{
    int n;

    cout << "Enter the length of the line: ";
    cin >> n;
    line l(n);

    return 0;
}