#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};

int main()
{
    int n;
    cin >> n;

    Student students[100];

    for(int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    for(int i = 0; i < n / 2; i++)
    {
        char temp = students[i].s;
        students[i].s = students[n - 1 - i].s;
        students[n - 1 - i].s = temp;
    }

    for(int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
