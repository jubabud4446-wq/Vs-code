#include <stdio.h>
int main() 
{
    int num, first_digit;
    scanf("%d", &num);

    for (; num >= 10;)
    {
        num = num / 10;
        first_digit = num;
    }

    if (num < 10)
        first_digit = num;

    if (first_digit % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    return 0;
}
