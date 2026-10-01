#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }

    int left;
    int right;
    int is = 0;

    for (int i = 0; i <= n / 2; i++)
    {
        left = a[i];
        right = a[n - 1 - i];

        if (left == right)
        {
            is = 1;
        }
        else
        {
            is = 0;
            break;
        }
    }
    
    if (is == 0)
    {
        printf ("NO");
    }
    else
    {
        printf ("YES");
    }
    
    return 0;
}