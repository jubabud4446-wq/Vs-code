#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // Generate all subarrays
        for (int i = 0; i < n; i++)
        {
            int current_max = a[i];

            for (int j = i; j < n; j++)
            {
                if (a[j] > current_max)
                {
                    current_max = a[j];
                }

                // Print maximum of subarray a[i..j]
                printf("%d ", current_max);
            }
        }

        printf("\n");
    }

    return 0;
}