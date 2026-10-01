#include <stdio.h>
#include <stdbool.h>

void capital_to_small(char x)
{
    printf("%c\n", x + 32);
}

int main()
{
    while (true)
    {
        char x;
        printf("Enter a capital letter: ");
        scanf(" %c", &x);
        if (x < 'A' || x > 'Z')
        {
            printf("Please Enter A Capital Character\n");
        }
        else
        {
            capital_to_small(x);
            break;
        }
    }
    return 0;
}