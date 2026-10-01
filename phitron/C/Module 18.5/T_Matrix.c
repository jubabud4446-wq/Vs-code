#include <stdio.h>


int mod(int x)
{
    if (x < 0)
    {
        x *= -1;
    }
    return x;
}


int main()
{
    int n, a[201][201], Mdiasum = 0, Sdiasum = 0, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                Mdiasum += a[i][j];
            }
            if (i + j == n - 1)
            {
                Sdiasum += a[i][j];
            }
        }
    }

    ans = mod(Mdiasum-Sdiasum);
    printf("%d", ans);
    
    return 0;
}