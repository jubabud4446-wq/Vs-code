/*
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter from the English alphabet: ");
    scanf("%c", &ch);

    printf("You entered: %c (ASCII: %d)\n", ch, ch);
    printf("Previous letter: %c (ASCII: %d)\n", ch - 1, ch - 1);
    printf("Next letter: %c (ASCII: %d)\n", ch + 1, ch + 1);

    return 0;
}
*/

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
