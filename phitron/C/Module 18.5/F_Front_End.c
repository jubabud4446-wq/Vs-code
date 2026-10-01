#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int printed = 0;
    int left = 0, right = n - 1;
    
    while (printed < n)
    {
        if (printed % 2 == 0)
        {
            printf("%d ", a[left]);
            left++;
        }

        else
        {
            printf("%d ", a[right]);
            right--;
        }

        printed++;
    }
    
    return 0;
}