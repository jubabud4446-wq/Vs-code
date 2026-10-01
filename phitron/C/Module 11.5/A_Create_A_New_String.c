#include <stdio.h>
#include <string.h>
int main() 
{
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);
    char ans[2002] = {0};

    int lens = strlen(s);
    int lent = strlen(t);

    // for (int i = 0; i <= lens + lent; i++)
    // {
    //     if (i < lens)
    //     {
    //         ans[i] = s[i];
    //     }
    //     if (i == lens)
    //     {
    //         ans[i] = ' ';
    //     }
    //     if (i > lens)
    //     {
    //         ans[i] = t[i - lens - 1];
    //     }        
    // }
    
    printf("%d %d\n", lens, lent);
    // printf("%s", ans);

    printf("%s %s", s, t);

    return 0;
}