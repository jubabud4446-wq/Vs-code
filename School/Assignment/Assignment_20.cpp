#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    for (; num != 0; num /= 10) {
        reversed = reversed * 10 + (num % 10);
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
