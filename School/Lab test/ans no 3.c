#include <stdio.h>

int main()
{
    char name[21];
    float salary;
    int hours;

    gets(name);
    scanf("%f", &salary);
    scanf("%d", &hours);

    float new_salary;

    if (hours <= 8)
    {
        new_salary = salary + (salary * 0.3);
    }
    else if (hours == 10)
    {
        new_salary = salary + (salary * 0.5);
    }
    else if (hours >= 12)
    {
        new_salary = salary + (salary * 1.0);
    }
    
    printf("%s\n", name);
    printf("%f\n", new_salary);

    return 0;
}
