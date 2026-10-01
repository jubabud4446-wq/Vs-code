#include <stdio.h>
#include <string.h>
int main() 
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    int pal = 1;
    
    for (int i = 0; i < len ; i++, len--)
    {
        if (s[i] != s[len -1])
        {
            pal = 0;
            break;
        }
    }
    
    if (pal == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    return 0;
}