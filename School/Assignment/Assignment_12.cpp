#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase for simplicity
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    // Using if-else
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("\nUsing if-else: It is a vowel.\n");
    } else {
        printf("\nUsing if-else: It is a consonant.\n");
    }

    // Using switch
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Using switch: It is a vowel.\n");
            break;
        default:
            printf("Using switch: It is a consonant.\n");
    }

    return 0;
}
