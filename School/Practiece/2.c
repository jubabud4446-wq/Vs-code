#include <stdio.h>

int num1 = 1, num2 = 2, num3 = 3;

long long int fun(int n)
{
    if (n == 1)
        return num1;
    else if (n == 2)
        return num2;
    else if(n == 3)
        return num3;
    
    else
    {
        return fun(n-1) * fun(n-2) * fun(n-3);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 0 || n <= 100)
    {
        printf("%lld\n", fun(n));
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}