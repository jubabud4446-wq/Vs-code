#include <stdio.h>
void small_to_capital(char x)
{
    printf("%c", x - 32);
}
int main()
{
    char x;
    scanf("%c", &x);
    small_to_capital(x);
    return 0;
}