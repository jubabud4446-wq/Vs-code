#include <stdio.h>

int main()
{
    char s[1000];
    char sen[1000];
    char ch;
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}