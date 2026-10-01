#include <stdio.h>

struct Student
{
    char name[100];
    int id;
    float marks;
};

int main()
{
    struct Student no[2];

    for (int i = 0; i < 2; i++)
    {
        scanf(" %99[^\n]", no[i].name);
        scanf(" %d", &no[i].id);
        scanf(" %f", &no[i].marks);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\n", no[i].name);
        printf("ID: %d\n", no[i].id);
        printf("Marks: %.2f\n", no[i].marks);
    }

    return 0;
}