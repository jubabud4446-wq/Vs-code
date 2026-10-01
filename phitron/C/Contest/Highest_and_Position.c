#include <stdio.h>

int main()
{
    int num, highest, position;

    scanf("%d", &num);
    highest = num;
    position = 1;

    for (int i = 2; i <= 100; i++)
    {
        scanf("%d", &num);
        if (num > highest)
        {
            highest = num;
            position = i;
        }
    }

    printf("%d\n%d\n", highest, position);

    return 0;
}