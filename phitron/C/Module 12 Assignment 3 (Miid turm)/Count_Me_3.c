#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d", &t);
    char s[10001];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s);
        int len = strlen(s);
        int cnt_cap = 0, cnt_sml = 0, cnt_dgt = 0;
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                cnt_cap++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                cnt_sml++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                cnt_dgt++;
            }
        }
        printf("%d %d %d\n", cnt_cap, cnt_sml, cnt_dgt);
    }
    return 0;
}