#include <bits/stdc++.h>
using namespace std;

class Students
{
    public:
    string Name;
    int roll;
    int marks;
};

bool cmp(Students l, Students r)
{
    if (l.marks < r.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    Students a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].Name >> a[i].roll >> a[i].marks;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].Name << " " <<  a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}
