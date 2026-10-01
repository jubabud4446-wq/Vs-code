#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};

bool compareStudents(const Student &a, const Student &b)
{
    if (a.total_marks != b.total_marks)
    {
        return a.total_marks > b.total_marks;
    }

    return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;

    Student students[100];

    for(int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s
            >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (students[j].total_marks < students[j+1].total_marks)
            {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
            else if (students[j].total_marks == students[j+1].total_marks)
            {
                if (students[j].id > students[j+1].id)
                {
                    Student temp = students[j];
                    students[j] = students[j+1];
                    students[j+1] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " "
             << students[i].s << " " << students[i].id << " "
             << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
