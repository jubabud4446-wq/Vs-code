#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    
    void display()
    {
        cout << "Assalamu Alaikum From :- " << name << endl;
    }
};

int main()
{
    Student Jubaer("Asadullah Al-Jubaer", 240101006);
    cout << Jubaer.name << " " << Jubaer.roll << endl;
    Jubaer.display(); 
    return 0;
}