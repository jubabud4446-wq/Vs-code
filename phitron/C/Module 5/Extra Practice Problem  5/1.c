#include <stdio.h>

int main() {
    long long X, Y;
    if (scanf("%lld %lld", &X, &Y) != 2) {
        return 0;
    }
    
    long long sum = X + Y;
    long long mul = X * Y;
    long long sub = X - Y;
    
    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, mul);
    printf("%lld - %lld = %lld\n", X, Y, sub);
    
    return 0;
}
