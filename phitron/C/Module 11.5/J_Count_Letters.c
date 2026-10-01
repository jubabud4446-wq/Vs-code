#include <stdio.h>
#include <string.h>

int main() 
{
    char s[10000001];
    scanf("%s", s);
    int len = strlen(s);
    
    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int value = s[i];
        count[value - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            continue;
        }
        printf("%c : %d", i + 'a', count[i]);
        printf("\n");
    }
    
    return 0;
}