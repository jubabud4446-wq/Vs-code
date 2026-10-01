#include <stdio.h>
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int Plus = sum(x, y);
    int minus = sub(x, y);
    printf("%d\n%d", Plus, minus);
    return 0;
}