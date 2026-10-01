#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = n-i+1; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}