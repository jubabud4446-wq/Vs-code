#include <stdio.h>

struct Person
{
    int ID;
    char name[50];
};

struct Employee
{
    struct Person p;
    double salary;
};

int main()
{
    struct Employee e = {25, "Abu Hasan", 250000.00};
    printf("%d %s %lf", e.p.ID, e.p.name, e.salary);
    return 0;
}