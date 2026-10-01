#include <stdio.h>
int main() 
{
    int T, N;
    scanf("%d", &T);
    if (1<=T && T<=15)
    {
        
    while (T--)
    {
        scanf("%d", &N);
        int fact = 1;
        while (N)
        {
            fact = fact * N;
            N--;
        }
        printf("%d\n", fact);
    }
    return 0;
    
    }    
}