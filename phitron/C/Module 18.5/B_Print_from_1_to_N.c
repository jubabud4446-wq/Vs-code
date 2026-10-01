#include <stdio.h>

void print(int i, int x)
{
    if (i > x)
    {
        return;
    }    
    printf("%d\n", i);
    print(i + 1, x);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(1, n);
    return 0;
}