#include <stdio.h>

int mod(int x)
{
    if (x < 0)
    {
        x = -x;
    }
    else
    {
        x = x;
    }

    return x;
}

int main()
{
    int mat[5][5];
    int savei = 0, savej = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1)
            {
                savei = i;
                savej = j;
            }
        }
    }

    int i = 2, j = 2;
    int x = mod(savei - i);
    int y = mod(savej - j);

    int ans = x + y;

    printf("%d", ans);
    
    return 0;
}