#include <stdio.h>

int main() {
    int choice;
    char ch;
    int ascii;

    printf("Choose an option:\n");
    printf("1. Find ASCII value of a character\n");
    printf("2. Find character from ASCII value\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        printf("ASCII value of '%c' is %d\n", ch, ch);
    } 
    else if (choice == 2) {
        printf("Enter an ASCII value (0-127): ");
        scanf("%d", &ascii);
        printf("Character corresponding to ASCII %d is '%c'\n", ascii, ascii);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
