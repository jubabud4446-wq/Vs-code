#include <stdio.h>
void char_to_ascii(char abc)
{
    printf("%d", abc);
}
int main()
{
    char abc;
    scanf("%c", &abc);
    char_to_ascii(abc);
    return 0;
}
