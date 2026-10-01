#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int i, string n, char s, int m)
    {
        id = i;
        name = n;
        section = s;
        marks = m;
    }
};

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        Student* students[3];

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            string name;
            char section;
            
            cin >> id >> name >> section >> marks;
            students[i] = new Student(id, name, section, marks);
        }

        Student* best = students[0];
        for (int i = 1; i < 3; i++)
        {
            if (students[i]->marks > best->marks)
            {
                best = students[i];
            }
            else if (students[i]->marks == best->marks && students[i]->id < best->id)
            {
                best = students[i];
            }
        }

        cout << best->id << " " << best->name << " " << best->section << " " << best->marks << endl;

        for (int i = 0; i < 3; i++)
        {
            delete students[i];
        }
    }
    
    return 0;
}