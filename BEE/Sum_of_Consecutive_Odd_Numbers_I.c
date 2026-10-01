#include <stdio.h>
int main() 
{
    int x, y, s_loop, e_loop, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        s_loop = y + 1;
        e_loop = x - 1;
    }
    else
    {
        s_loop = x + 1;
        e_loop = y - 1;
    }
    
    for (int i = s_loop; i <= e_loop; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}