#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    return 0;
}