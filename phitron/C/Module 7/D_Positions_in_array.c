#include <stdio.h>
int main() 
{
    int n;
    int arr[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 10)
        {
            continue;
        }
        printf("A[%d] = %d\n", i, arr[i]);
    }
    return 0;
}