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

    Student(int r, double g)
    {
        r = rool;
        g = gpa;
    }

};


int main()
{
    char name;
    cout << "Enter Name : \n" << "Enter roll : \n" << "Enter gpa : \n" << endl;
    cin >> name;
    Student Jubaer(6, 4.5);
    cout << Jubaer.rool << "\n" << Jubaer.gpa << endl;
}