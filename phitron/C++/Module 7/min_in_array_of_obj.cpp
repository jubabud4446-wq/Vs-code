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
    ifstream input("input.txt");
    ofstream output("output.txt");

    int n;
    input >> n;
    Students a[n];
    for (int i = 0; i < n; i++)
    {
        input >> a[i].Name >> a[i].roll >> a[i].marks;
    }
    Students minimum;
    minimum.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks  < minimum.marks)
        {
            minimum = a[i];
        }
    }
    output << minimum.Name<< " " << minimum.roll << " " << minimum.marks << endl;
    return 0;
}
