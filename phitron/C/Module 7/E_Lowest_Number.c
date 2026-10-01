#include <stdio.h>
int main() 
{
    int n, lowest , lowest_position;
    int arr[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            lowest_position = i + 1;
        }
    }
    
    printf("%d ", lowest);
    printf("%d", lowest_position);

    return 0;
}