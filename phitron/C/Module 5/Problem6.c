#include <stdio.h>
int main() 
{
    int A, B, C, minimum, maximum;
    scanf("%d %d %d", &A, &B, &C);

    maximum = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
    minimum = (A < B) ? ((A < C) ? A : C) : ((B < C) ? B : C);

    printf("%d %d\n", minimum, maximum);

    return 0;
}
