#include <stdio.h>
int main() 
{
    long long int n, sum=0;
    scanf("%lld",&n);
    int a[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    if(sum < 0)
    {
        printf("%lld ", -sum);
    }
    else
    {
        printf("%lld ", sum);
    }

    return 0;
}