#include <bits/stdc++.h>
using namespace std;

struct Students
{
    char name[200];
    int roll;
    double gpa;
};


class Student
{
    public :
    char name[200];
    int rool;
    double gpa;
};


int main()
{
    Student a;
    a.rool = 06;
    a.gpa = 4.5;
    cin >> a.name;

    cout << a.name << endl << a.rool << endl << a.gpa << endl;
}