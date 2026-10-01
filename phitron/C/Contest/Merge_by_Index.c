#include <stdio.h>
#include <string.h>

int main() 
{
    char S1[2001], S2[1001];
    int start, end;
    
    scanf("%s", S1);
    scanf("%s", S2);
    scanf("%d %d", &start, &end);
    
    for (int i = start; i <= end && S2[i] != '\0'; i++) 
    {
        int len = strlen(S1);
        S1[len] = S2[i];
        S1[len + 1] = '\0';
    }
    
    printf("%s\n", S1);
    
    return 0;
}
