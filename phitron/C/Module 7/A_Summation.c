#include <stdio.h>

int main() 
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    if (sum < 0) {
        sum = -sum;
    }
    printf("%lld", sum);
    return 0;
}