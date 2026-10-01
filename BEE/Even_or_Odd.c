#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            printf("NULL\n");
            continue;
        }
        
        if (a[i] % 2 != 0)
        {
            printf("ODD ");
        }
        else
        {
            printf("EVEN ");
        }
        if (a[i] < 0)
        {
            printf("NEGATIVE\n");
        }
        else
        {
            printf("POSITIVE\n");
        }
    }
    
    return 0;
}