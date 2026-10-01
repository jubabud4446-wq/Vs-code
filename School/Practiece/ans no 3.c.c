#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 0; s < 5-i; s++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                printf("%d ", i*i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}