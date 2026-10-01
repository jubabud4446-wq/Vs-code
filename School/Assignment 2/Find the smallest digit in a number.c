#include <stdio.h>

int main() {
    int num, digit, min = 9;
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit < min)
            min = digit;
        num = num / 10;
    }

    printf("%d\n", min);
    return 0;
}
