#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y, temp, sum = 0;
        scanf("%d %d", &x, &y);
        if (y > x)
        {
            temp = x;
            x = y;
            y = temp;
        }
        
        
        for (int j = y+1; j<x; j++)
        {
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}