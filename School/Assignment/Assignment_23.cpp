#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          // get the last digit
        reversed = reversed * 10 + remainder; // append it to reversed number
        num = num / 10;                // remove last digit from num
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
