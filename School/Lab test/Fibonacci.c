#include <stdio.h>
int main()
{
    int n, pnum = 0, num = 1, nnum;
    printf("Enter n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d, ", pnum);
        nnum = pnum + num;
        pnum = num;
        num = nnum;
    }

    return 0;
}