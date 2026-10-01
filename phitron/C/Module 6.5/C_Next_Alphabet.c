#include <stdio.h>
int main() 
{
    char C, nextc;
    scanf("%c", &C);
    if (C == 'z') {
        printf("a");
    } else if (C == 'Z') {
        printf("A");    
    } else {
        nextc = C + 1;
        printf("%c", nextc);
    }
    return 0;
}