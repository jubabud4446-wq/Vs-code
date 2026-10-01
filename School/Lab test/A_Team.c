#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, count = 0;
    scanf ("%d", &n);
    int a[3];

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf ("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            count ++;
        }
    }
    
    printf ("%d", count);

    return 0;
}