#include <stdio.h>
int main() 
{
    long long int A, B, C, D, Difference;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    Difference = (A * B) - (C * D);
    printf("Difference = %lld", Difference);
    return 0;
}