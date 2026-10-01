#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    d1 = num / 1000;          // extract thousands digit
    d2 = (num / 100) % 10;    // extract hundreds digit
    d3 = (num / 10) % 10;     // extract tens digit
    d4 = num % 10;            // extract ones digit

    sum = d1 + d2 + d3 + d4;

    printf("Sum of digits = %d\n", sum);

    return 0;
}