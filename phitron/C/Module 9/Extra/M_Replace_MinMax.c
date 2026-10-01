#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0], min = a[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
