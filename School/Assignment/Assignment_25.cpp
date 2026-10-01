#include <stdio.h>

int main() {
    int num, original, sum = 0, digit, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;    // get last digit
        fact = 1;

        // calculate factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;         // add factorial to sum
        num /= 10;           // remove last digit
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is NOT a Strong Number.\n", original);

    return 0;
}
