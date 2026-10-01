#include <stdio.h>
#include <string.h>

void birthday(char name[], int age)
{
    int num;
    printf("How manny times ?\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Happy birthday to you!!\n");
        printf("Happy birthday to you!!\n");
        printf("Happy birthday to you, dear %s\n", name);
        printf("Happy birthday to you!!\n");
        printf("\n");
    }
    printf("Your %d years old\n", age);
}

int main()
{
    char name[100];
    int age;
    printf("What is your name?\n");
    scanf("%s", name);
    printf("What is your new age?\n");
    scanf("%d", &age);

    birthday(name, age);

    return 0;
}