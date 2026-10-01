#include <stdio.h>

void printReverse(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }
    printReverse(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printReverse(n);
    return 0;
}
