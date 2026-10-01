#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int A[100], B[100], result[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = A[i] + B[n - 1 - i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
