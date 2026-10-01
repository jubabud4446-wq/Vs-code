#include <stdio.h>
#include <string.h>
int main() 
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    
    int len1 = strlen(a);
    int len2 = strlen(b);
    printf("%d %d\n", len1, len2);
    
    printf("%s%s\n", a, b);
    
    char temp = 0;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);
    return 0;
}