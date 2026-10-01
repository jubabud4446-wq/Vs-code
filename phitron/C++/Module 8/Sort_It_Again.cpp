#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        long long id;
        int math_marks;
        int eng_marks;
};

int main()
{
    int n;
    cin >> n;

    Student students[1000];

    for(int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s
            >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    for(int i = 0; i < n - 1; i++)
    {
        int selected_index = i;

        for(int j = i + 1; j < n; j++)
        {

            if (students[j].eng_marks > students[selected_index].eng_marks)
            {
                selected_index = j;
            }
            else if (students[j].eng_marks == students[selected_index].eng_marks)
            {

                if (students[j].math_marks > students[selected_index].math_marks)
                {
                    selected_index = j;
                }
                else if (students[j].math_marks == students[selected_index].math_marks)
                {

                    if (students[j].id < students[selected_index].id)
                    {
                        selected_index = j;
                    }
                }
            }
        }

        if (selected_index != i)
        {
            Student temp = students[i];
            students[i] = students[selected_index];
            students[selected_index] = temp;
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