#include <stdio.h>
int main() 
{
    int N;
    scanf("%d",&N);
    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", i+1);
        }
    }
    
    else
    {
        for (int i = 0; i >= N; N++)
        {
            printf("%d ", N);
        }
    }
    return 0;
}