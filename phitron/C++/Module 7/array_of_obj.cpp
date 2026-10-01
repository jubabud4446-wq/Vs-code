#include <bits/stdc++.h>
using namespace std;
class Students
{
    public:
    string Name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Students a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].Name);
        cin >> a[i].roll >> a[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].Name << " " << a[i].roll << " " << a[i].marks << endl;
    }
        
    return 0;
}