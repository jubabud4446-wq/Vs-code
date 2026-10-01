#include <stdio.h>
int main() 
{
    int n, num, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even += 1; 
        }
        else
        {
            odd += 1;
        }
        if (num > 0)
        {
            pos += 1;
        }
        if (num < 0)
        {
            neg += 1;
        }
        
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}