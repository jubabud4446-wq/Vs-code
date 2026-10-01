#include <stdio.h>

int main() {
    int num, i, sum;

    printf("Perfect numbers between 1 and 1000 are:\n");

    // Check each number from 1 to 1000
    for (num = 1; num <= 1000; num++) {
        sum = 0;

        // Find divisors of num
        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        // Check if sum of divisors equals the number
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
