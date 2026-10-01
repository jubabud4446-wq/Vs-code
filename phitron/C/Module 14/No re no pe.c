#include <stdio.h>

void sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int ans = x + y;
    printf("%d", ans);
}

int main()
{
    sum();
    return 0;
}