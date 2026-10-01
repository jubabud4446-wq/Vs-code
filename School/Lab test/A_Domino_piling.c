#include <stdio.h>
int main()
{
    int m, n;
    scanf ("%d %d", &m, &n);
    int area;
    int ans;

    area = m*n;
    ans = area / 2;

    printf ("%d", ans);
    return 0;
}