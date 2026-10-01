#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    double salary;
    public:
    void set(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }
    void get()
    {
        cout << "ID: " << id << "\nSalary: " << salary << endl;
    }
};

int main()
{
    Employee o1;
    int i;
    double s;

    cout << "Enter ID: ";
    cin >> i;

    cout << "Enter salary: ";
    cin >> s;

    o1.set(i, s);
    o1.get();
    return 0;
}