#include <stdio.h>
int main() 
{
    int n, count_in = 0, count_out = 0;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] >= 10 && x[i] <= 20)
        {
            count_in++;
        }
        else
        {
            count_out++;
        }
    }
    
    printf("%d in\n%d out\n", count_in, count_out);
    return 0;
}