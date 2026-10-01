#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int n;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                n = arr[i];
                arr[i] = arr[j];
                arr[j] = n;
            }
        }
    }

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
