#include <stdio.h>

int main() {
    int n;
    int i, sumWhile = 0, sumFor = 0;

    printf("Enter the value of n (n >= 1): ");
    scanf("%d", &n);

    // ---------- Using while loop ----------
    i = 1; // start from 1
    while (i <= n) {
        sumWhile = sumWhile + (i + 1) * (i + 2);
        i++;
    }

    // ---------- Using for loop ----------
    for (i = 1; i <= n; i++) {
        sumFor += (i + 1) * (i + 2);
    }

    // ---------- Display results ----------
    printf("\nSum using while loop = %d", sumWhile);
    printf("\nSum using for loop   = %d", sumFor);

    // ---------- Verifying -----------------
    if (sumWhile == sumFor)
        printf("\nBoth results are the same.\n");
    else
        printf("\nResults are NOT the same.\n");

    return 0;
}
