#include <stdio.h>
int main()
{
    int ans = 0, no = 1;

    for (int i = 2; no <=40; i=i+3, no++)
    {
        ans = ans + i*i;
    }
    
    printf("%d\n", ans);

    return 0;
}