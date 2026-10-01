#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[100001];
        scanf("%s", s);
        int len = strlen(s), good = 0;
        for (int j = 0; j < len; j++)
        {
            if ((s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0')||
            (s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1'))
            {
                good = 1;
                break;
            }
        }
        if (good)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}   