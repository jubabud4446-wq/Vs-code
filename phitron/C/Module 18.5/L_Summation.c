#include <stdio.h>

long long arraysum(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
        
    return a[n - 1] + arraysum(a, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long ans = arraysum(a, n);
    printf("%lld", ans);
    return 0;
}