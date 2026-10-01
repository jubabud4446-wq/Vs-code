#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string name;
    int id;
public:
    void set_details(string n, int i)
    {
        name = n;
        id = i;
    }
    void display_details()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Employee emp;
    string name;
    int id;

    cout << "Enter name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Enter ID: ";
    cin >> id;

    emp.set_details(name, id);
    emp.display_details();

    return 0;
}