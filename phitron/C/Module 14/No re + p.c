#include <stdio.h>

void sum(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x,y);
    return 0;
}