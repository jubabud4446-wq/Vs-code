#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int total = m1 + m2;

        float new_days = (float)m1 * d / (int)total;

        int fewer_days = d - (int)new_days;

        printf("%d\n", fewer_days);
    }

    return 0;
}