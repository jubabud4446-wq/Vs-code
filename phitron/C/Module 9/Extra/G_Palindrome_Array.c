#include <stdio.h>
int main() 
{
    int n, is = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0, j = n - 1 ; i < j ; i++, j--)
    {
        if (a[i] != a[j])
        {
            is = 0;
            break;
        }
    }

    if (is == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
        
    return 0;
}