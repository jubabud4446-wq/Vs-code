#include <stdio.h>
int main() 
{
    int num, reversed = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10;
        reversed = reversed * 10 + temp;
        num = num / 10;
    }
    printf("Reversed Number: %d\n", reversed);
    return 0;
}