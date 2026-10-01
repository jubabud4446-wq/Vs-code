#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++) 
    {
        char a[51], b[51], c[102];
        scanf("%s %s", a, b);
        int lena = strlen(a);
        int lenb = strlen(b);
        int k = 0;

        int i;
        for (i = 0; i < lena && i < lenb; i++) 
        {
            c[k++] = a[i];
            c[k++] = b[i];
        }

        while (i < lena) c[k++] = a[i++];
        while (i < lenb) c[k++] = b[i++];

        c[k] = '\0';

        printf("%s\n", c);
    }

    return 0;
}