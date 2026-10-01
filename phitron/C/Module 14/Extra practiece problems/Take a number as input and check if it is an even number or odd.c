#include <stdio.h>
void even_or_not(int num)
{
    int even = 0;
    if (num % 2 == 0)
    {
        even = 1;
    }

    if (even == 1)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    even_or_not(num);
    return 0;
}