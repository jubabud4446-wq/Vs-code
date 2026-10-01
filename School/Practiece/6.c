#include <stdio.h>
#include <string.h>

struct Engineer {
    char name[21];
    float salary;
    char status;
};

int main()
{
    struct Engineer employees[2];

    for (int i = 0; i < 2; i++)
    {
        fgets(employees[i].name, 21, stdin);
        scanf("%f", &employees[i].salary);
        scanf(" %c", &employees[i].status);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Status: %c\n", employees[i].status);
    }

    return 0;
}