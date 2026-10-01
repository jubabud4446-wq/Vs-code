#include <stdio.h>

int main()
{
    int n, temp, is = 1;
    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    int m = 0;
    while (temp > 0)
    {
        temp /= 10;
        m++;
    }

    int a[m];

    for (int i = 0; i < m; i++)
    {
        a[m - 1 - i] = n % 10;
        n = n / 10;
    }

    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d", a[i]);
    // }

    int left, right;
    for (int i = 0; i <= m / 2; i++)
    {
        left = a[i];
        right = a[m - 1 - i];

        if (left != right)
        {
            is = 0;
            break;
        }
        
    }
    
    if (is == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf ("Palindrome");
    }

    return 0;
}