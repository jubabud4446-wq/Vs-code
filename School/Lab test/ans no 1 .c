#include <stdio.h>
int main()
{
    int insure = 0;
    char s[3];

    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            scanf ("%d", &s[i]);
        }

        else
        {
            scanf ("%c", &s[i]);
        }
    }

    if (s[0] == 'M')
    {
        insure = 1;
    }

    else if (s[1] == 'M' && s[2] >= 30)
    {
        insure = 1;
    }
    
    else if (s[1] == 'F' && s[2] >= 25)
    {
        insure = 1;
    }
    
    else
    {
        insure = 0;
    }
    
    if (insure == 1)
    {
        printf ("Insured");
    }
    else
    {
        printf ("Not Insured");
    }
    
    return 0;
}