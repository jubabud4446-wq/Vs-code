#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        float a, b, c, avg;
        scanf("%f %f %f", &a, &b, &c);

        avg = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n", avg);
    }

    return 0;
}
