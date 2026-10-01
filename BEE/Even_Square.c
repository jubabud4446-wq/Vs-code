#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int sqr;
        if (i % 2 ==0)
        {
            sqr = i * i;
            printf("%d^2 = %d\n", i, sqr);
        }
    }
    
    return 0;
}